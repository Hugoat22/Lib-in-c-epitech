/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function capitalize string
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    int carac = 1;
    for (int i = 0;str[i] != '\0';i++) {
        if ('a' <= str[i] && str[i] <= 'z' && carac == 1) str[i] -= 32;
        if ('A' <= str[i] && str[i] <= 'Z' && carac == 0) str[i] += 32;
        carac = 0;
        if (!('a' <= str[i] && str[i] <= 'z') && !('A' <= str[i] && str[i] <= 'Z')) carac = 1;
    }
    return str;
}