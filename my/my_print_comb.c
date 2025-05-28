/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** fonction display three number 
*/

#include "my.h"

void my_print_3(int *chiffre)
{
    for (int i = 0;i < 3;i++) {
        my_putchar(chiffre[i] + 48);
    }
    my_putchar(',');
    my_putchar(' ');
}

int my_print_comb(void)
{
    int chiffre[3] = {0,1,2};
    while (1) {
        my_print_3(chiffre);
        if (chiffre[0] == 7 && chiffre[1] == 8 && chiffre[2] == 9)
            return 1;
        if (chiffre[1] != 8 && chiffre[2] == 9) {
            chiffre[1]++;
            chiffre[2] = chiffre[1] + 1;
            continue;
        }
        if (chiffre[1] == 8 && chiffre[2] == 9) {
            chiffre[0]++;
            chiffre[1] = chiffre[0] + 1;
            chiffre[2] = chiffre[1] + 1;
            continue;
        }
        chiffre[2]++;
    }
    return 1;
}