/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** error_handling
*/

#include "my.h"

int error_handling(int ac, char **av)
{
    int j;

    for (int i = 1; i != ac; i++) {
        j = 0;
        while (av[i][j] != '\0') {
            if (av[i][j] == '-' || (av[i][j] >= '0' && av[i][j] <= '9')) {
                j++;
            }
            else {
                write(2, ERROR_NBR, my_strlen(ERROR_NBR));
                return (84);
            }
        }
    }
    return (0);
}
