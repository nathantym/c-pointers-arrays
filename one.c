#include <stdio.h>
#include <stdlib.h>

int main() {
    // Create an array of size 10
    int *int_array = (int*)malloc(sizeof(int)*10);
    int i;

    puts("----- Integer array -----\n");
    
    for(i = 0; i < 10; i++) {
        // Set index[0] to 1 to make the output easier to understand
        int_array[i] = i+1;
        printf("int_array[%d] = %d\n", i, int_array[i]);
    }
    // Free the memory of the array
    free(int_array);
}
