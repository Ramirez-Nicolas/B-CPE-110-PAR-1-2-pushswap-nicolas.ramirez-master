/*
** EPITECH PROJECT, 2020
** bubble_sort.c
** File description:
** trier mes numbers 
*/

#include <stdio.h>

void swap_elem(int *array, int index1, int index2)
{
    int c = 0;

    c = array[index1];
    array[index1] = array[index2];
    array[index2] = c;
}

void bubble_sort_array(int *array, int size)
{
    int num = 0;
    int index1 = 0;
    int index2 = 1;

    while (num != size) {
        if (array[num] > array[num+1]) {
            swap_elem(array, index1, index2);
        }
        num++;
        index1++;
        index2++;
        if (num == size) {
            num = 0;
            index1 = 0;
            index2 = 1;
            if (array[num] < array[num+1]) {
                num++;
            }
        }
    }
}

int main(void)
{
    int array[6] = { 2, 4, 1, 3, 6, 5 };
    int size = 6;

    bubble_sort_array(array, size);
    printf("array[0] = %d, array[1] = %d, array[2] = %d, array[3] = %d, array[4] = %d, array[5] = %d\n", array[0], array[1], array[2], array[3], array[4], array[5]);
    return (0);
}
