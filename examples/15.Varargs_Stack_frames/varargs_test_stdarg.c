/*
 * Variadic functions "by the book": <stdarg.h>.
 *
 * Works on any architecture and any compiler, because figuring out
 * where the arguments live (registers? stack? in what order?) is
 * left to the implementation — that's the whole point of va_list.
 *
 *   va_list  — a "cursor" over the argument list (usually a struct or a pointer)
 *   va_start — position on the first undeclared argument
 *   va_arg   — fetch the next argument of the SPECIFIED type
 *   va_copy  — an independent copy of the cursor (needed for a second pass)
 *   va_end   — wrap up
 *
 * Rules to remember (otherwise UB):
 *   - the function must have at least one normal parameter before "...",
 *     and va_start is set to the LAST OF THEM;
 *   - the type in va_arg must match the type AFTER default promotions:
 *     char/short -> int, float -> double;
 *   - the number and types of arguments are never checked — that's the
 *     programmer's responsibility (in printf, the format string).
 *
 * Build:  gcc varargs_test_stdarg.c
 *         gcc -m32 varargs_test_stdarg.c     (same result)
 */

#include <stdio.h>
#include <stdarg.h>

/* ------------------------------------------------------------------ */
/* 1. The very same example as in varargs_test_X86_64.c               */
/* ------------------------------------------------------------------ */

void my_printf3(const char *f, ...)
{
    va_list ap;
    va_start(ap, f);          /* cursor — right after f */

    int v1 = va_arg(ap, int);
    int v2 = va_arg(ap, int);
    int v3 = va_arg(ap, int);

    va_end(ap);
    printf(f, v1, v2, v3);    /* print with plain printf */
}

/* ------------------------------------------------------------------ */
/* 2. Any number of arguments: the sum of n numbers                   */
/* ------------------------------------------------------------------ */

long sum_n(int n, ...)
{
    va_list ap;
    va_start(ap, n);

    long s = 0;
    for (int i = 0; i < n; i++)
        s += va_arg(ap, int);

    va_end(ap);
    return s;
}

/* ------------------------------------------------------------------ */
/* 3. Different types + default promotions                            */
/* ------------------------------------------------------------------ */

/* Type string: i = int, d = double, s = const char *.
   Note: float is read as double, short/char as int. */
void print_mixed(const char *types, ...)
{
    va_list ap;
    va_start(ap, types);

    for (const char *t = types; *t; t++) {
        switch (*t) {
        case 'i': printf("int %d, ", va_arg(ap, int));            break;
        case 'd': printf("double %g, ", va_arg(ap, double));      break;
        case 's': printf("string \"%s\", ", va_arg(ap, const char *)); break;
        default:  printf("(unknown type '%c'), ", *t);            break;
        }
    }

    va_end(ap);
    putchar('\n');
}

/* ------------------------------------------------------------------ */
/* 4. The "printf wrapper" idiom: passing va_list on to vprintf       */
/* ------------------------------------------------------------------ */

/* That's how all the log_debug()/error() functions in real code work: they
   don't parse anything themselves, just pass the list on to the v-prefixed
   functions. */
void log_line(const char *fmt, ...)
{
    va_list ap, ap2;
    va_start(ap, fmt);
    va_copy(ap2, ap);         /* a second independent pass over the same arguments */

    printf("[log] ");
    vprintf(fmt, ap);         /* vprintf is printf that takes a va_list */

    printf("[len] %d\n", vsnprintf(NULL, 0, fmt, ap2));

    va_end(ap2);
    va_end(ap);
}

/* ------------------------------------------------------------------ */

int main(void)
{
    my_printf3("%d + %d = %d!\n", 2, 3, 5);

    printf("1+2+...+8 = %ld\n", sum_n(8, 1, 2, 3, 4, 5, 6, 7, 8));

    print_mixed("ids",
                42,            /* int    */
                3.5,           /* double */
                "hello");      /* const char * */

    log_line("%s: %d\n", "answer", 42);

    return 0;
}
