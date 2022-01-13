#include <stdio.h>

int main()
{
    int v1 = 37, v2 = 43;

    printf("%zu, %zu, %zu, %zu, %zu\n", sizeof(short int), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(void *));

    printf("%u, %d\n", -1, -1);

    if(v1) {
        puts("v1");
    }

    if(v1 && v2) {
        puts("v1 && v2");
    }

    printf("%d, %d, %d, %d, %d\n", v1 && !v2, v1 == v2, v1 & v2, !v2, ~v2);

    return 0;
}
