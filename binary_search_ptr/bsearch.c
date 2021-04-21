#include <stdio.h>

int *binary_search(int *begin, int *end, int elt)
{
    if (begin == end)
        return begin;
    int inter = end - begin;
    if (*begin == elt)
    {
        return begin;
    }
    if (*end == elt)
    {
        return end;
    }
    inter = inter / 2;
    int *p_inter = begin + inter;

    if (inter == 0)
    {
        if (elt > *begin)
            return end;
        // return end;
        else
            return begin;
    }
    if (elt > *p_inter)
    {
        return binary_search(p_inter, end, elt);
    }
    else if (elt < *p_inter)
    {
        return binary_search(begin, p_inter, elt);
    }
    else
    {
        // printf("Valeur intermédiaire = %d\n", *p_inter);
        return p_inter;
    }
}
/*
int main(void)
{
    int a[] = {
        8 // 0, 1, 4, 5, 9, 10, 18, 22, 42, 51, 69
    };
    // binary_search(a, a + 11, 5);
    binary_search(a, a + 1, 5);
}
*/
/*

Test(basic, one_elt_inf)
{
    int a[] = { 8 };
    cr_assert_eq(binary_search(a, a + 1, 5), a);
}

Test(basic, one_elt_ge)
{
    int a[] = { 8 };
    cr_assert_eq(binary_search(a, a + 1, 9), a + 1);
}
Test(missing, small_left)
{
    int a[] = { 1, 128 };
    cr_assert_eq(binary_search(a, a + 2, -1), a);
}

Test(missing, small_right)
{
    int a[] = { 1, 128 };
    cr_assert_eq(binary_search(a, a + 2, 127), a + 1);
}


*/
