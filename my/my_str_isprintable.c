/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function check if string is printable
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0;str[i] != '\0';i++) {
        if (!(' ' <= str[i] && str[i] <= '~')) return 0;
    }
    return 1;
}