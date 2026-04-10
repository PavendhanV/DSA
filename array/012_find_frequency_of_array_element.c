#include <stdio.h>
#include <stdlib.h>

void find_frequency_of_array_element(int *array, int array_size)
{
    int *freq = malloc(sizeof(int) * array_size);
    int visited = -1;
    int count = 0;

    if (freq == NULL)
        return;

    for (int i = 0; i < array_size; i++) {
        count = 1;
        for (int j = (i + 1); j < array_size; j++) {
            if (array[j] == array[i]) {
                freq[j] = visited;
                count++;
            }
        }
        if (freq[i] != visited) {
            freq[i] = count;
        }
    }

    for (int i = 0; i < array_size; i++) {
        if (freq[i] != visited) {
            printf("Array value %d is repeated %d times\n",array[i],freq[i]);
        }
    }
 
    free(freq);
    freq = NULL;
}

int main(int argc, char *argv[])
{
    int array[] = { 1, 2, 3, 1, 2, 3, 1, 2, 3, 6, 6, 7, 8, 9, 9, 8, 7, 0 };
    int array_size = (sizeof(array) / sizeof(array[0]));

    find_frequency_of_array_element(array, array_size);

    return 0;
}