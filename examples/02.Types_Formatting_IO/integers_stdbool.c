#include <stdbool.h>
#include <stdio.h>

// https://pubs.opengroup.org/onlinepubs/009695399/basedefs/stdbool.h.html

int main()
{
    bool v1 = 37, v2 = 43;

    printf("5. %d, %d, %d, %d, %d, %d, %d\n",
        v1, v2, v1 == v2,
        v1 && !v2,  v1 & v2, !v2, ~v2
    );

    return 0;
}
