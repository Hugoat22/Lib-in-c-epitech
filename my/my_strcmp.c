/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function check identify
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int size[3];
    int i = 0;

    size[0] = my_strlen(s1);
    size[1] = my_strlen(s2);
    size[2] = size[0] > size[1] ? size[1] : size[0];
    for (;i != size[2];i++) {
        if (s1[i] != s2[i]) return s1[i] - s2[i];
    }
    if (size[0] == size[1]) return 0;
    return s1[i] - s2[i];
}