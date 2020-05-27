/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** commands for the swaps
*/

#include "my.h"

int do_pa(int *l_a, int *l_b, int len_a, int len_max)
{
    l_a[len_max - len_a] = l_b[0];
    shift_all_minus_one(l_b, len_max);
    my_putstr("pa");
    if (len_a == len_max) {
        is_list_sorted(l_a, len_a, len_max);
        return (1);
    }
    is_list_sorted(l_a, len_a, len_max);
    return (len_a);
}

int do_pb(int *l_a, int *l_b, int len_a, int len_max)
{
    l_b[0] = l_a[0];
    shift_all_minus_one(l_a, len_max);
    shift_all_plus_one(l_b, len_a);
    my_putstr("pb");
    if (len_a == 0) {
        is_list_sorted(l_a, len_a, len_max);
        return (1);
    }
    is_list_sorted(l_a, len_a, len_max);
    return (len_a);
}

int do_ra(int *l_a, int len_a, int len_max)
{
    int first_nbr = l_a[0];

    for (int i = 0; i != len_a - 1; i++)
        l_a[i] = l_a[i + 1];
    l_a[len_a - 1] = first_nbr;
    my_putstr("ra");
    if (is_list_sorted(l_a, len_a, len_max) == 1)
        return (0);
    return (1);
}
