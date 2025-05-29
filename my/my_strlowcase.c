/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function low case
*/

char *my_strlowcase(char *str)
{
    for (int i = 0;str[i] != '\0';i++)
        if ('A' <= str[i] && str[i] <= 'Z') str[i] += 32;
    return str;
}