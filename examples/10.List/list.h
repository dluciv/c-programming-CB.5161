#ifndef __LIST_H__
#define __LIST_H__ 1

#define EMPTY_LIST 0

struct Node;

typedef struct Node * List;

// Prepend value ti the list as its head
List l_prepend(List list, int value);

// Remove element at given position
List l_remove(List list, int index);

// Print list elements
void l_print(List list);

// Append element to the end of the list
List l_append(List list, int value);

// Insert element to the list at the given position
List l_insert_to(List list, int index, int value);

// Insert element into the sorted list to keep sorting
List l_insert_keep_sorting(List list, int value);

#endif
