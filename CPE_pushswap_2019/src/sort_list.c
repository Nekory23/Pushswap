/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** sort the l_a list
*/

#include "my.h"

void sort_list_sa_sb(int *l_a, int *l_b, int len_a, int len_b)
{
    int temp = 0;

    if (l_a[0] > l_a[1] && len_a >= 2) {
        swap_elem(l_a, 0, 1);
        temp++;
        my_putstr("sa");
    }
    if (l_b[0] > l_b[1] && len_b >= 2) {
        swap_elem(l_b, 0, 1);
        temp++;
        my_putstr("sb");
    }
    if (temp == 1)
        is_list_sorted(l_a, len_a, len_b);
}
