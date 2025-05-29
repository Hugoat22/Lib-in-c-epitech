/*
** EPITECH PROJECT, 2025
** EPITECH
** File description:
** my_strncmp
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int size[3];
    int i = 0;

    size[0] = my_strlen(s1);
    size[1] = my_strlen(s2);
    size[2] = size[0] > size[1] ? size[1] : size[0];
    size[2] = n < size[2] ? n : size[2];
    for (;i != size[2];i++) {
        if (s1[i] != s2[i]) return s1[i] - s2[i];
    }
    if (i < n) return s1[i] - s2[i];
    return 0;
}