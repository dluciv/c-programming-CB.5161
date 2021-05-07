#include "list.h"

int main()
{
    List l = EMPTY_LIST;

    l = l_prepend(l, 5);
    l = l_prepend(l, 4);
    l = l_prepend(l, 3);
    l = l_prepend(l, 2);
    l = l_prepend(l, 1);
    l_print(l);

    l = l_remove(l, 0);
    l_print(l);

    l = l_remove(l, 2);
    l_print(l);

    // deallocate list elements one by one
    while(l)
        l = l_remove(l, 0);

    return 0;
}
