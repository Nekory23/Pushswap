/*
** EPITECH PROJECT, 2019
** push_swap
** File description:
** my_atoi
*/

int my_atoi(char const *str)
{
    int neg = 0;
    int nbr = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-')
            neg = neg + 1;
        if (str[i] >= '0' && str[i] <= '9') {
            nbr = nbr * 10;
            nbr = nbr + (str[i] - '0');
        }
    }
    if (neg % 2 == 1)
        nbr = nbr * (-1);
    return (nbr);
}
