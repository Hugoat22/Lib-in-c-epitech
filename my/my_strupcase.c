/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function up case 
*/

#include "my.h"

char *my_strupcase(char *str)
{
    for (int i = 0;str[i] != '\0';i++)
        if ('a' <= str[i] && str[i] <= 'z') str[i] -= 32;
    return str;
}