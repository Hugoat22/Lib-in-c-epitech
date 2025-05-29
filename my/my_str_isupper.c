/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function check string is only upper case
*/

int my_str_isupper(char const*str)
{
    for (int i = 0;str[i] != '\0';i++) {
        if ('a' <= str[i] && str[i] <= 'z') return 0;
    }
    return 1;
}