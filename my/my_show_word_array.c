/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function display one word by line
*/

#include <stddef.h>
#include "my.h"

int my_show_word_array(char * const *tab)
{
    int size = 0;
    for (;tab[size] != NULL;size++);
    my_putstr(concat_params(size,tab));
}