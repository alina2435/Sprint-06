#include <stdio.h>

void mx_arr_rotate(int *arr, int size, int shift)
{
    if (size <= 0 || shift == 0)
        return;

    shift = shift % size;
    if (shift < 0)
        shift += size;

    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[(i + shift) % size] = arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}
