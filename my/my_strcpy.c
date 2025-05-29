/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function create copy str
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    for (;src[i] != '\0';i++) dest[i] = src[i];
    dest[i+1] = '\0';
    return dest;
}