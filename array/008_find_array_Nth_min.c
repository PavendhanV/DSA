#include <stdio.h>
#include <limits.h>

int find_array_Nth_min(int *array, int array_size, int pos)
{
    /* Sort the array */
    for (int i = 0; i < (array_size - 1); i++) {
        for (int j = (i + 1); j < array_size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    /* Remove the duplicate */
    int j = 1;
    for (int i = 1; i < array_size; i++) {
        if (array[i] != array[i -1]) {
            array[j++] = array[i];
        }
    }

    return array[pos-1];
}

int main(int argc, char *argv[])
{
    int array[] = { 9, 10, 3, 6, 7, 2, 5, 8, 1, 4, -1, -100 };
    int array_size = (sizeof(array)/sizeof(array[0]));

    int pos = 5;

    printf("Source array : ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");    

    printf("Nth (%d) min value for the given array : %d\n",pos, find_array_Nth_min(array, array_size, pos));

    return 0;
}