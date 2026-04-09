#include <stdio.h>

int sum_of_array(int *array, int array_size)
{
    int sum = 0;

    for (int i = 0; i < array_size; i++) {
        sum += array[i];
    }

    return sum;
}

int main(int argc, char *argv[])
{
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int array_size = (sizeof(array) / sizeof(array[0]));

    printf("Sum value of array : %d\n",sum_of_array(array, array_size));

    return 0;
}