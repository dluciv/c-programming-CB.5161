#include <stdio.h>
#include <math.h>

#define FP_TYPE float

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
        printf("%d %f %f\n", n, exxp(n), exp(n));
    return 0;
}
