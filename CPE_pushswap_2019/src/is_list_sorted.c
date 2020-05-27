/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** verify if the list is sorted
*/

#include "my.h"

int is_list_sorted(int *l_a, int len_a, int len_max)
{
    if (len_a != len_max)
        my_putchar(' ');
    for (int i = 0; i != len_a - 1; i++) {
        if (len_a != len_max) {
            break;
        }
        if (l_a[i] > l_a[i + 1]) {
            my_putchar(' ');
            break;
        }
        if (i == len_a - 2) {
            my_putchar('\n');
            return (1);
        }
    }
    return (0);
}
