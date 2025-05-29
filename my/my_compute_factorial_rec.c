/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function recursive factoriel
*/

int my_compute_factorial_it(int nb)
{
    if (nb < 0 || nb > 12) return 0;
    if (nb == 0) return 1;
    return nb * my_compute_factorial_it(nb - 1);
}