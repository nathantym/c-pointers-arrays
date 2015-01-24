#include <stdio.h>
#include <stdlib.h>

int main() {
    // Create an array of size 10
    char** char_array = malloc(sizeof(char)*10);
    int i;

    puts("----- Character array -----\n");

    // Loop and init each index with size 15
    for(i = 0; i < 10; i++) {
        char_array[i] = malloc(sizeof(char)*15);
        // Set index to a string
        char_array[i] = "'Str in here'\0"; 
        printf("%s in index %d\n", char_array[i], i);
    }
}
