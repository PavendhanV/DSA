#include <stdio.h>

int find_array_Nth_max(int *array, int array_size, int n)
{

    /* Sort the array */
    for (int i = 0; i < (array_size - 1); i++) {
        for (int j = (i + 1); j < array_size; j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    /* Remove the duplicates */
    int j = 1;
    for (int i = 1; i < array_size; i++) {
        if (array[i] != array[i - 1]){
            array[j++] = array[i];
        }
    }

    return array[n-1];
}

int main(int argc, char *argv[])
{
    int array[] = { 1, 2, 6, 1, 5, 2, 7, 8, 9, 4, 0, 2, 4, 4, 3, 9, 8 };
    int array_size = (sizeof(array) / sizeof(array[0]));

    int n = 3;

    printf("Actual array : ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");

    printf("Nth (%d) max number from the given array : %d\n",n, find_array_Nth_max(array, array_size, n));

}