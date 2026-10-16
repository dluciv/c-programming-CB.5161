#include <stdio.h>
#include <math.h>

int main() {
    puts("  0 1 2 3 4 5 6 7 8 9 A B C D E F");
    for(int i = 0x2; i < 0x8; i ++)
    {
        putchar('0' + i);
        for(int j = 0; j < 0x10; j++)
        {
            putchar(' ');
            putchar((i<<4) + j);
        }
        puts("");
    }
    return 0;
}
