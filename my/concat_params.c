/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function concatene parametre
*/

#include <stdlib.h>
#include "my.h"

char *concat_params(int argc, char **argv)
{
    int size = 0;
    int j = 0;

    for (int i = 0;i != argc;i++) size += my_strlen(argv[i]);

    char *chaine = malloc(sizeof(char) * (size + 1));
    chaine[0] = '\0';
    for (;j != argc;j++) {
        my_strcat(chaine, argv[j]);
        my_strcat(chaine, "\n");
    }
    chaine[j+1] = '\0';
    return chaine;
}