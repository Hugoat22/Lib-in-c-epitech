/*
** EPITECH PROJECT, 2025
** My_lib
** File description:
** function display lowercase alphabet
*/

#include "my.h"

int my_print_alpha(void) {
    for (int i = 97; i <= 122;i++) {
        my_putchar(i);
    }
}