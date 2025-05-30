/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function display and conerte decimal in number
*/

#include "my.h"

int my_putnbr_base(int nbr, char const *base)
{
    int neg = 0;
    int size = my_strlen(base);
    char res[1024];
    int count = 0;

    if (nbr < 0) {
        neg = 1;
        nbr *= -1;
    }
    while (nbr / size != 0) {
        res[count] = base[nbr % size];
        nbr /= size;
        count++;
    }
    res[count++] = base[nbr % size];
    if (neg == 1) res[count++] = '-';
    res[count++] = '\0';
    my_putstr(my_revstr(res));
}