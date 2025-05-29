/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function min prime number
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    int i = 2;
    for (;i != nb;i++) {
        if (nb % i == 0 && my_is_prime(i)) 
            break;
    }
    return i;
}