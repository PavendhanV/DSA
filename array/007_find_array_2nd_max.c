#include <stdio.h>
#include <limits.h>

int find_array_2nd_max(int *array, int array_size)
{
    int max = INT_MIN;
    int second_max = INT_MIN;

    for (int i = 0; i < array_size; i++) {
        if (max < array[i]) {
            second_max = max;
            max = array[i];
        }
        else if (second_max < array[i] && array[i] != max) {
            second_max = array[i];
        }
    }

    return second_max;
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

    printf("2nd max value for the given array : %d\n",find_array_2nd_max(array, array_size));


    return 0;
}