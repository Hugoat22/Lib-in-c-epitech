/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** Function display caractere
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}