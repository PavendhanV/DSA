#include <stdio.h>
#include <limits.h>

int find_array_2nd_min(int *array, int array_size)
{
    int min = INT_MAX;
    int second_min = INT_MAX;

    for (int i = 0; i < array_size; i++) {
        if (min > array[i]) {
            second_min = min;
            min = array[i];
        }
        else if (second_min > array[i] && array[i] != min) {
            second_min = array[i];
        }
    }

    return second_min;
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

    printf("2nd min value for the given array : %d\n",find_array_2nd_min(array, array_size));

    return 0;
}