#include <stdio.h>

int main()
{
    for(int c = 0; c < 16; ++c)
    {
        switch(c)
        {
        case 1:
             puts("1 dec (one) is 1 hex");
             break;
        case 2:
             puts("2 dec (two) is 2 hex");
        }
        printf("%d dec is %x hex\n", c, c);
    }

    return 0;
}
