/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** fonction sort number
*/

#include "my.h"

void my_sort_int_array(int *array, int size)
{
    int j = 0;
    for (int i = 0;i != size * size;i++) {
        if (i % size == 0 && i != 0) j++;
        if (array[i % size] > array[j]) my_swap(&array[i % size],&array[j]);
    }
}