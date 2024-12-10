#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5, i;
    int *arr = (int *)calloc(n, sizeof(int)); // Allocates memory for 5 integers and initializes to 0
    if (arr == NULL) return 1;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]); // All values will be 0
    }
    printf("\n");

    free(arr); // Free the allocated memory
    return 0;
}