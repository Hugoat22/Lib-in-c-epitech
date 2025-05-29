/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function check string is alphabet
*/

int my_str_isalpha(char const*str)
{
    for (int i = 0;str[i] != '\0';i++) {
        if (!('a' <= str[i] && str[i] <= 'z') && !('A' <= str[i] && str[i] <= 'Z')) return 0;
    }
    return 1;
}