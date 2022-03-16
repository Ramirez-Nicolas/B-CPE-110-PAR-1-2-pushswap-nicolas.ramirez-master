
/*
** EPITECH PROJECT, 2020
** swap_elem.c
** File description:
** swap elem
*/

#include <stdio.h>

/*void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
*/

void swap_elem(int *array, int index1, int index2)
{
    int c = 0;

    c = array[index1];
    array[index1] = array[index2];
    array[index2] = c;
}

int main(void)
{
    int array[6] = { 1, 2, 3, 4, 5, 6 };
    int index1 = 2;
    int index2 = 4;

    swap_elem(array, index1, index2);
    printf("%d, %d", array[index1], array[index2]);
    return (0);
}
