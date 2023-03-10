#include <stdio.h>

int main()
{
    int v1 = 37, v2 = 43;

    printf(
        "1. short: %zu, int: %zu, long: %zu, loooong: %zu, void * %zu\n",
        sizeof(short int), sizeof(int), sizeof(long int),
        sizeof(long long int), sizeof(void *)
    );

    printf("2. %u, %d\n", -1, -1);

    if(v1) {
        puts("3. v1");
    }

    if(v1 && v2) {
        puts("4. v1 && v2");
    }

    printf("5. %d, %d, %d, %d, %d\n", v1 && !v2, v1 == v2, v1 & v2, !v2, ~v2);

    return 0;
}
