/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** fonction display number size n 
*/

#include "my.h"

void my_print_n(int chiffre, int n)
{
    int size = 1;
    for (;chiffre >= my_power(10,size);size++);
    if (size != n) my_putchar('0');
    my_put_nbr(chiffre);
}

int check_nbr(int chiffre, int n)
{
    if (n == 0) return 1;
    int new_chiffre = 0;
    int decom_chiffre[n];
    int overflow = 0;
    decom_chiffre[0] = chiffre / my_power(10,n-1);
    chiffre -= (decom_chiffre[0] * my_power(10, n-1));
    for (int i = n-1; i != 0;i--) {
        decom_chiffre[(n) - i] = chiffre / my_power(10,i-1);
        chiffre -= (decom_chiffre[(n) - i] * my_power(10, i-1));
        if (decom_chiffre[((n) - i)-1] >= decom_chiffre[(n) - i]) decom_chiffre[(n) - i] = decom_chiffre[((n) - i)-1] + 1;
    }
    for (int k = 0;k != n;k++) {
        if (decom_chiffre[k] == 10) {
            overflow = 1;
            break;
        }
    }
    for (int j = n-1;j != -1;j--) new_chiffre += (decom_chiffre[(n-1)-j] * my_power(10,j));
    if (overflow) return check_nbr(new_chiffre, n);
    return new_chiffre;
}

int my_print_combn(int n)
{
    if (n > 10 || n < 1) return 84;
    if (n == 3) {
        my_print_comb();
        return 1;
    }
    int chiffre = check_nbr(0,n);
    int final_nbr = 0;
    for (int i = n;i != 0;i--) final_nbr += ((10 - i) * my_power(10,i-1));
    while (1)
    {
        my_print_n(chiffre, n);
        if (final_nbr == chiffre) return 1;
        my_putchar(',');
        my_putchar(' ');
        chiffre++;
        if (chiffre / my_power(10, n) == 0 && chiffre > 9) chiffre = check_nbr(chiffre, n);
    }
}