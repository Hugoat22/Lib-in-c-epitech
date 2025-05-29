/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function square root
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int nbr = 0;
    for (;nbr !=46341;nbr++) {
        if (nb == my_compute_power_rec(nbr,2)) return nbr;
        if (nb < my_compute_power_rec(nbr,2)) return 0;
    }
    return 0;
}