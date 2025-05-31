/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function converse in string into words array
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"

int is_alphanum(char c)
{
    if (('A'<= c && c <= 'Z') || ('a'<= c && c <= 'z') || ('0'<= c && c <= '9')) return 1;
    return 0;
}
int len_word( char const *str)
{
    int count_word = 0;
    int sep = 1;

    for (int i = 0;str[i] != '\0';i++) {
        if (is_alphanum(str[i]) && sep == 1) {
            count_word++;
            sep = 0;
        } else if (!is_alphanum(str[i])) sep = 1;
    }
    return count_word;
}

char *getword(int *pos,char const *str)
{
    int count = 0;
    char world[1024];
    for (;!is_alphanum(str[*pos]);(*pos)++);
    for (;is_alphanum(str[*pos]);(*pos)++) {
        world[count] = str[*pos];
        count++;
    }
    world[count] = '\0';
    return my_strdup(world);
}

char **my_str_to_word_array(char const *str)
{
    int size_array = len_word(str);
    int count_word = 0;
    int pos = 0;
    char **array = malloc(sizeof(char *) * (size_array + 1));

    for (;count_word != size_array;count_word++) array[count_word] = getword(&pos,str);
    array[count_word] = NULL;
    return array;
}