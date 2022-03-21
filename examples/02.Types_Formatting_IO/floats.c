#include <stdio.h>

int main()
{
    float eps = 1.0f;
    printf("%zu\n", sizeof(eps));
    do
    {
        printf("%0.10le\n", eps);
        eps /= 2.0f;
    }
    while (1.0f + eps != 1.0f);

    return 0;
}
