#include <stdio.h>
#include <string.h>

int main()
{
    char s[20] = "Hello! ";
    char name[8];
    scanf("%7s", name);
    strcat(s, name);
    printf("%d, %s\n", strlen(s), s);
    return 0;
}
