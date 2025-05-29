/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function find motif in string
*/

#include <stddef.h>
#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int size = my_strlen(to_find);
    int i = 0;
    int j = 0;

    if (size == 0) return str;
    for (;str[i] != '\0';i++) {
        if (str[i] == to_find[j]) {
            j++;
        } else {
            j = 0;
        }
        if (j == size) break;
    }
    if (j == size)
        return &str[i - size];
    return NULL;
}