/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function display lowercase revserse alphabet
*/

#include "my.h"

int my_print_alpha(void) 
{
    for (int i = 122; i >= 97;i--) {
        my_putchar(i);
    }
    return 1;
}