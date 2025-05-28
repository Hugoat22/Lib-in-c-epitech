/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** fonction reverse string
*/

#include "my.h"

char *my_evil_str(char *str)
{
    int size = my_strlen(str);
    if (size == 1 || size == 0) return str;
    int size_pair = size / 2;
    for (int i = 0;i != size_pair;i++) my_swap_char(&str[i], &str[(size - 1) - i]);
    return str;
}