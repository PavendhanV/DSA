#include <stdio.h>

void remove_duplicate_sorted_array(int *array, int array_size)
{
    int j = 1;

    printf("Before removing duplicate elements : ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    
    for (int i = 1; i < array_size; i++) {
        if (array[i] != array[i - 1]){
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
    int array[] = { 0, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 8, 8, 9 };
    int array_size = (sizeof(array) / sizeof(array[0]));

    remove_duplicate_sorted_array(array, array_size);

    return 0;
}