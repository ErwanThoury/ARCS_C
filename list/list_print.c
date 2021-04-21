#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void list_print(struct list *l)
{
    while (l != NULL)
    {
        printf("%d", l->data);
        l = l->next;
        if (l != NULL)
            printf(" ");
    }
    printf("\n");
}
/*
int op(int p)
{
    if (p == 1)
        return 1;
    else
        return 0;
}

int main()
{
    // printf("On est crée c\n");
    struct list *c = malloc(sizeof(struct list));
    c->data = 3;
    c->next = NULL;

    // printf("On est crée b\n");
    struct list *b = malloc(sizeof(struct list));
    b->data = 4;
    b->next = c;
    struct list *a = malloc(sizeof(struct list));
    a->data = 1;
    a->next = b;
    list_print(a);
    a = list_remove_if(a, &op);
    list_print(a);

    // printf("On est dans la add\n");
    struct list *abcd = list_add(a, 0);
    // printf("On est dans print\n");

    list_print(abcd);
    list_find(abcd, 1);
    list_find(abcd, 4);
    list_print(list_remove(abcd, 3));
    list_find(abcd, 3);
    list_print(list_remove(abcd, 0));
    list_print(list_remove(abcd, 2));
    list_print(list_remove(abcd, 2));
    list_print(list_remove(abcd, 1));

    list_print(list_reverse_sorted_add(abcd, 9));

    return 0;
}
*/
