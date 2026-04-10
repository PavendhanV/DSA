#include <stdio.h>


/* Approach - 01 */

void remove_duplicate_unsorted_array1(int *array, int array_size)
{
    printf("Before removing duplicate elements : ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");

    for (int i = 0; i < (array_size - 1); i++) {
        for (int j = (i + 1); j < array_size; j++) {
            if (array[i] == array[j]) {
                for (int k = j; k < array_size - 1; k++) {
                    array[k] = array[k + 1];
                }
                array_size--;
                j--;
            }
        }
    }

    printf("After removing duplicate elements : ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    
}


/* Approach - 02 */
void remove_duplicate_unsorted_array2(int *array, int array_size)
{
    printf("Before removing duplicate elements : ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    
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

    /* Remove the duplicate element */
    int j = 1;
    for (int i = 1; i < array_size; i++) {
        if (array[i] != array[i - 1]) {
            array[j++] = array[i];
        }
    }

    printf("After removing duplicate elements : ");
    for (int i = 0; i < j; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
}


int main(int argc, char *argv[])
{
    int array[] = { 1, 2, 6, 1, 5, 2, 7, 8, 9, 4, 0, 2, 4, 4, 3, 9, 8 };
    int array_size = (sizeof(array) / sizeof(array[0]));

    remove_duplicate_unsorted_array1(array, array_size);


    int array1[] = { 1, 2, 6, 1, 5, 2, 7, 8, 9, 4, 0, 2, 4, 4, 3, 9, 8 };
    int array_size1 = (sizeof(array) / sizeof(array[0]));

    remove_duplicate_unsorted_array2(array1, array_size1);

    return 0;
}