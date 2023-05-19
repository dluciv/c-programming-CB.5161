#include "list.h"
#include <stdlib.h>
#include <stdio.h>

struct Node
{
  int value;
  struct Node *next;
};

List l_prepend(List l, int v)
{
    List h = (List)malloc(sizeof(struct Node));
    h->value = v;
    h->next = l;
    return h;
}

List l_append(List l, int v)
{
    if(!l)
        return l_prepend(l, v);
    else
    {
        List c = l;
        while(c->next)
            c = c->next;
        c->next = l_prepend(EMPTY_LIST, v);
        return l;
    }
}

List l_remove(List l, int ind)
{
    if(!ind)
    {
        List n = l->next;
        free(l);
        return n;
    }
    else
    {
        List c = l;
        while(--ind)
            c = c->next;
        List d = c->next;
        c->next = d->next;
        free(d);
        return l;
    }
}

void l_print(List l)
{
    for(; l; l=l->next)
    {
        printf("\t%d", l->value);
    }
    puts("");
}
