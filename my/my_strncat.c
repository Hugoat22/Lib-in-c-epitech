/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function concatene n size string
*/

#include "my.h"

char *my_strncat(char *dest,char const *src, int nb)
{
    int size = my_strlen(dest);
    int i = size;

    for (;src[i - size] != '\0' || (i - size) < nb;i++)
        dest[i] = src[i - size];
    dest[i + 1] = '\0';
    return dest;
}