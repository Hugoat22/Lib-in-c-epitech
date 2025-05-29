/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function copy n charactere
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    for (;src[i] != '\0' || i != n;i++) dest[i] = src[i];
    if (i != n) dest[n] = '\0';
    return dest;
}