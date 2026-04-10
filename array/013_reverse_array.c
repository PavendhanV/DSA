#include <stdio.h>

int main(int argc, char *argv[])
{
    int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int array_size = (sizeof(array)/sizeof(array[0]));

    printf("Before reverse array : ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");

    for (int i = 0; i < (array_size / 2); i++) {
        int temp = array[i];
        array[i] = array[(array_size - 1) - i];
        array[(array_size - 1) - i] = temp;
    }


    printf("After reverse array : ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");

    return 0;
}