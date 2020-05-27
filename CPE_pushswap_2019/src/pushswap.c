/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** sort numbers contained in l_a
*/

#include "my.h"

int push_swap(int ac, char **av)
{
    int *l_a = malloc(sizeof(int) * (ac - 1));
    int *l_b = malloc(sizeof(int) * (ac - 1));
    int len_a = ac - 1;

    if (one_nbr_list(ac) == 1)
        return (0);
    for (int i = 0; i != len_a; i++)
        l_a[i] = my_atoi(av[i + 1]);
    if (already_sorted_list(ac, l_a) == 1)
        return (0);
    if (bubble_sort(l_a, l_b, len_a, ac - 1) == 1) {
        len_a = 1;
        while (len_a != ac) {
            do_pa(l_a, l_b, len_a, ac - 1);
            len_a++;
        }
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac < 2) {
        write(2, ERROR_ARGNBR, my_strlen(ERROR_ARGNBR));
        return (84);
    }
    if (error_handling(ac, av) == 84)
        return (84);
    push_swap(ac, av);
    return (0);
}
