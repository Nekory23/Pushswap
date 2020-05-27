/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** bubble sort
*/

#include "my.h"

void shift_all_minus_one(int *list, int len_list)
{
    for (int i = 0; i != len_list; i++)
        list[i] = list[i + 1];
    list[len_list - 1] = 0;
}

void shift_all_plus_one(int *list, int len_list)
{
    for (int i = 1; i != len_list; i++)
        list[i] = list[i - 1];
}

int find_smallest_nbr(int *l_a, int len_a)
{
    int smallest = l_a[0];

    for (int i = 1; i != len_a; i++)
        if (smallest > l_a[i])
            smallest = l_a[i];
    return (smallest);
}

int bubble_sort(int *l_a, int *l_b, int len_a, int len_max)
{
    int smallest;

    sort_list_sa_sb(l_a, l_b, len_a, len_max);
    smallest = find_smallest_nbr(l_a, len_a);
    while (l_a[0] != smallest)
        if (do_ra(l_a, len_a, len_max) == 0)
            return (1);
    if (do_pb(l_a, l_b, len_a, len_max) == 0 || len_a == 1)
        return (1);
    len_a--;
    if (bubble_sort(l_a, l_b, len_a, len_max) == 1)
        return (1);
    return (0);
}
