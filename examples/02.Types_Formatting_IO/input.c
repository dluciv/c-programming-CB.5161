#include <stdio.h>

int main()
{
    char inp;
    for(;;)
    {
        puts("Break [yY1]/[nN0] ?");
        scanf(" %c", &inp);
        switch(inp)
        {
        case 'y':
        case 'Y':
        case '1':
            puts("Goodbye!");
            return 0;
        case 'n':
        case 'N':
        case '0':
            puts("Ok!");
            break;
        default:
            // puts("WAT?!");
            printf("WAT?! You answered: '%c'\n", inp);
        }
    }

    return 0;
}
