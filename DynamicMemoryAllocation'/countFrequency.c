#include <stdio.h>
#include <stdlib.h>

void countFrequencies(int *arr, int n) {
    int *visited = (int *)malloc(n * sizeof(int));
    if (visited == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Initialize visited array
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("Element - Frequency\n");
    for (int i = 0; i < n; i++) {
        // Skip this element if already counted
        if (visited[i]) {
            continue;
        }

        int count = 1; // Current element count

        // Count occurrences of arr[i]
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark this element as counted
            }
        }

        printf("%d - %d\n", arr[i], count);
    }

    free(visited); // Free allocated memory
}

int main() {
    int n = 10;

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    countFrequencies(arr, n);

    free(arr); // Free allocated memory
    return 0;
}
