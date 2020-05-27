/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

#include <stdlib.h>
#include <unistd.h>

int already_sorted_list(int ac, int *l_a);
int one_nbr_list(int ac);

void swap_elem(int *list, int first_elem, int sec_elem);
void sort_list_sa_sb(int *l_a, int *l_b, int len_a, int len_b);
int bubble_sort(int *l_a, int *l_b, int len_a, int len_max);
int is_list_sorted(int *l_a, int len_a, int len_max);

void shift_all_plus_one(int *list, int len_list);
void shift_all_minus_one(int *list, int len_list);

int do_ra(int *l_a, int len_a, int len_max);
int do_pb(int *l_a, int *l_b, int len_a, int len_max);
int do_pa(int *l_a, int *l_b, int len_a, int len_max);

int my_atoi(char const *str);
int error_handling(int ac, char **av);
int my_strlen(char const *str);
void my_putstr(char const *str);
void my_putchar(char c);

#define ERROR_ARGNBR "this function has to take at least one argument\n"
#define ERROR_NBR "all the arguments must be numbers\n"

#endif
