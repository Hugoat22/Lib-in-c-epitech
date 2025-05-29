/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function iteratif factoriel
*/

int my_compute_factorial_it(int nb)
{
    int nbr = 1;
    if (nb < 0 || nb > 12) return 0;
    while (1) {
        if (nb == 0) {
            nbr *= 1;
            break;
        }
        nbr *= nb;
        nb--;
    }
    return nbr;
}