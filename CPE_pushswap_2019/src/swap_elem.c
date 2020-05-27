/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** swap two elements in a list
*/

#include "my.h"

void swap_elem(int *list, int first_elem, int sec_elem)
{
    int temp;

    temp = list[first_elem];
    list[first_elem] = list[sec_elem];
    list[sec_elem] = temp;
}
