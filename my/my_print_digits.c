/*
** EPITECH PROJECT, 2025
** My_lib
** File description:
** function display all digits
*/

#include "my.h"

int my_print_digits(void)
{
    for (int i = 48;i <= 57;i++) {
        my_putchar(i);
    }
    return 1;
}