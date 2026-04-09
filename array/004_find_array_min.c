#include <stdio.h>

int find_array_min(int *array, int array_size)
{
    int min = array[0];

    for (int i = 1; i < array_size; i++) {
        if (min > array[i]) {
            min = array[i];
        }
    }

    return min;
}

int main(int argc, char *argv[])
{
    int array[] = { 9, 10, 3, 6, 7, 2, 5, 8, 1, 4, -1, -100 };
    int array_size = (sizeof(array)/sizeof(array[0]));

    printf("Source array : ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");    

    printf("Min value for the given array : %d\n",find_array_min(array, array_size));

    return 0;
}