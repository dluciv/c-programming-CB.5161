#include <stdio.h>

int main()
{
    float eps = 1.0;
    printf("%d\n", sizeof(eps));
    do
    {
        printf("%0.10le\n", eps);
        eps /= 2.0;
    }
    while (1.0f + eps != 1.0f);
             
    return 0;
}
