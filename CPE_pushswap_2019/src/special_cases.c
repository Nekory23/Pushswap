/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** handle the special cases
*/

#include "my.h"

int already_sorted_list(int ac, int *l_a)
{
    int i = 0;

    while (i != ac - 2) {
        if (l_a[i] <= l_a[i + 1])
            i++;
        else
            return (0);
    }
    my_putchar('\n');
    return (1);
}

int one_nbr_list(int ac)
{
    if (ac == 2) {
        my_putchar('\n');
        return (1);
    }
    return (0);
}
