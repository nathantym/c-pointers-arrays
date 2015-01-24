#include <stdio.h>
#include <stdlib.h>

void sort(int* a, int size);
void selection_sort(int* a, int n);

int main() {
    // Create an array of size 10
    int *int_array = (int*)malloc(sizeof(int)*10);
    int size = 10;
    int i;

    puts("----- Sort array -----\n");
    // Add random numbers to the array indices
    for(i = 0; i < 10; i++) {
        int_array[i] = rand() % 50;
    } 

    // Print out the original array
    puts("Original Array: \n");
    for(i = 0; i < 10; i++) {
        printf("array[%d] = %d\n", i, int_array[i]);
    }

    sort(int_array, size); // Sort the array

    // Print out the sorted array
    puts("Sorted Array: \n");
    for(i = 0; i < 10; i++) {
        printf("array[%d] = %d\n", i, int_array[i]);
    }

    // Free memory of the array
    free(int_array);
}

void sort(int* a, int size) {
    return selection_sort(a, size);
}

void selection_sort(int* a, int n) {
    int i, j, m, t;
    for (i = 0; i < n; i++) {
        for (j = i, m = i; j < n; j++) {
            if (a[j] < a[m])
                m = j;
        }
        t = a[i];
        a[i] = a[m];
        a[m] = t;
    }
}
