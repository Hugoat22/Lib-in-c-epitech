/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function iteratif power
*/

int my_compute_power_it(int nb, int p)
{
    if (p < 0) return 0;
    if (p == 0) return 1;
    int nbr = nb;
    while (1) {
        if (p == 0) {
            nbr = 1;
            break;
        }
        nbr *= nb;
    }
    return nbr;
}