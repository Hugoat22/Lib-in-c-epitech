/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function number is prime
*/

int my_is_prime(int nb)
{
    if (nb == 0 || nb == 1) return 0;
    if (!(nb % 1 == 0 && nb % nb == 0)) return 0;
    for (int i = 2;i != nb-1;i++) {
        if (nb % i == 0) return 0;
    }
    return 1;
}