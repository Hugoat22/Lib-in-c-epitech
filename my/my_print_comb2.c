/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** fonction display four number
*/

#include "my.h"
void my_print_3(int *chiffre)
{
    int nbr[2] = {0,0};
    for (int i = 0;i != 2;i++) {
        nbr[0] = chiffre[i] / 10;
        nbr[1] = chiffre[i] - (nbr[0] * 10);
        for (int j = 0;j < 2;j++) my_putchar(nbr[j] + 48);
        if (i == 0) my_putchar(' ');
    }
}
int my_print_comb2(void)
{
    int chiffre[2] = {0,1};
    while (1)
    {
        my_print_3(chiffre);
        if (chiffre[0] == 98 && chiffre[1] == 99) return 0;
        my_putchar(',');
        my_putchar(' ');
        if (chiffre[1] == 99) {
            chiffre[0]++;
            chiffre[1] = chiffre[0] + 1;
            continue;
        }
        chiffre[1]++;
    }
    return 1;
}