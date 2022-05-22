#include<stdio.h>

#define REP 100
#define ZXN 5000000

// https://en.wikipedia.org/wiki/Linear_congruential_generator#Parameters_in_common_use
int zx81n(int seed, int n)
{
    const int
        a = 75,
        c = 74,
        m = (1 << 16) + 1;

    for(int i = 0; i<n; i++)
        seed = (a * seed + c) % m;

    return seed;
}

int f1(void)
{
    int s = 0;
    for(int i = 0; i<REP; i++)
        s += zx81n(123, ZXN);
    return s;
}

int main(void)
{
    int s = f1();

    for(int i = 0; i<REP; i++)
        s += zx81n(123, ZXN);

    printf("%d\n", s);

    return 0;
}
