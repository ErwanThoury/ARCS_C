#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list *next;
};

struct list *list_add(struct list *l, int e)
{
    struct list *a = malloc(sizeof(struct list));
    a->data = e;
    a->next = l;
    return a;
}

struct list *list_find(struct list *l, int e)
{
    while (l != NULL)
    {
        if (l->data == e)
        {
            return l;
        }
        l = l->next;
    }
    return NULL;
}

struct list *list_remove(struct list *l, int e)
{
    if (l == NULL)
    {
        return NULL;
    }
    if (l->data == e)
    {
        return l->next;
    }

    struct list *retour = l;
    struct list *prec = l;

    while ((l != NULL) && (l->next != NULL))
    {
        if (l->data == e)
        {
            // free(prec->next);
            prec->next = l->next;
            return retour;
        }

        prec = l;
        l = l->next;
    }
    return retour;
}

struct list *list_reverse_sorted_add(struct list *l, int e)
{
    struct list *retour = l;
    struct list *a = malloc(sizeof(struct list));
    a->data = e;
    struct list *prec = l;
    if ((l == NULL) || (l->data < e))
    {
        a->next = l;
        return a;
    }
    while (l != NULL)
    {
        if (l->data < e)
        {
            a->next = l;
            prec->next = a;

            return retour;
        }

        prec = l;
        l = l->next;
    }
    a->next = l;
    prec->next = a;

    return retour;
}

struct list *list_remove_if(struct list *l, int (*predicate)(int))
{
    struct list *retour = l;
    while (l != NULL)
    {
        if ((predicate(l->data) == 1) && (retour == l))
        {
            retour = l->next;
        }
        l = l->next;
    }
    l = retour;
    if (l == NULL)
        return NULL;

    while (l != NULL)
    {
        if (predicate(l->data) == 1)
        {
            list_remove(retour, l->data);
        }
        l = l->next;
    }
    return retour;
}
