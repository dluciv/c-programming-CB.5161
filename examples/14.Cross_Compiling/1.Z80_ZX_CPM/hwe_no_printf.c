#include <stdio.h>
#include <math.h>

#define FP_TYPE float

void pfloat(FP_TYPE x)
{
    char outp[13] = "+     .     ";
    if(x < 0)
    {
        outp[0] = '-';
        x = -x;
    }
    x *= 1e5;
    for(int i = 11; i>0; --i)
    {
        int d = (int)(x) % 10;
        outp[i] = '0' + d;
        x -= d;
        x /= 10.0;
        if(i==7)
            --i;
    }
    printf("%s", outp);
}

FP_TYPE exxp(FP_TYPE x)
{
    FP_TYPE result = 0.0f, t = 1.0f;
    long f = 1;
    for(int i = 1; i < 10; t *= x, f *= i++)
        result += t / f;
    return result;
}

int main() {
    printf("%d, %d, %d, %d\n", sizeof(int), sizeof(long), sizeof(float), sizeof(double));
    for(int n = 0; n < 10; n++)
    {
        printf("%d ", n);
        pfloat(exxp(n));
        printf(" ");
        pfloat(exp(n));
        puts("");
    }
    return 0;
}
