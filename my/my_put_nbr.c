/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** include_lib
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int size = 0;
    int res = 0;
    if (nb == 0) {
        my_putchar(48);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    for (;nb >= my_power(10,size);size++);
    for (int i = size-1;i != -1;i--) {
        res = nb / my_power(10,i);
        nb -= res * my_power(10,i);
        my_putchar(res + 48);
    }
}