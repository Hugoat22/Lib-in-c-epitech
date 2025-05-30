/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function concatene string
*/

#include "my.h"

char *my_strcat(char *dest,char const *src)
{
    int size = my_strlen(dest);
    int i = size;

    for (;src[i - size] != '\0';i++)
        dest[i] = src[i - size];
    dest[i + 1] = '\0';
    return dest;
}