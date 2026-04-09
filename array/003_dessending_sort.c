#include <stdio.h>

int main(int argc, char *argv[])
{
    int array[] = { 9, 10, 3, 6, 7, 2, 5, 8, 1, 4 };
    int array_size = (sizeof(array)/sizeof(array[0]));

    printf("Before dessending sort : ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");


    for (int i = 0; i < (array_size - 1); i++) {
        for (int j = (i + 1); j < array_size; j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }


    printf("After dssending sort : ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");


    return 0;
}