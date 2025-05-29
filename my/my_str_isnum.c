/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function check string is number
*/

int my_str_isnum(char const*str)
{
    for (int i = 0;str[i] != '\0';i++) {
        if (!('0' <= str[i] && str[i] <= '9')) return 0;
    }
    return 1;
}