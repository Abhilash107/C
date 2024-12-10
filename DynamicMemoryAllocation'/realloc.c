#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5, i;
    int *arr = (int *)malloc(n * sizeof(int)); // Allocate memory for 5 integers
    if (arr == NULL) return 1;

    for (i = 0; i < n; i++) {
        arr[i] = i + 1; // Initialize array with 1, 2, 3, 4, 5
    }

    // Increase size to 10 integers
    arr = (int *)realloc(arr, 10 * sizeof(int));
    if (arr == NULL) return 1;

    // Initialize new elements
    for (i = n; i < 10; i++) {
        arr[i] = i + 1;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]); // Prints 1 to 10
    }
    printf("\n");

    //* you should not use NULL checking (arr[i] != NULL) to determine the end of a dynamically allocated array
    for(int i = 0;arr[i] != NULL;i++){
        printf("%d ", arr[i]);
    }

    free(arr); // Free the allocated memory
    return 0;
}
