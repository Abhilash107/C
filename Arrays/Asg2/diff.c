#include <stdio.h>

int main() {
    int arr1[100], arr2[100], arr3[100];
    int size1, size2, size3 = 0;

    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    printf("Enter elements of first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements of second array
    printf("Enter elements of second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Find difference
    for (int i = 0; i < size1; i++) {
        int found = 0; // Flag to check if element is found in arr2
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1; // Element exists in arr2
                break;
            }
        }
        if (!found) { // If element not found in arr2
            arr3[size3] = arr1[i]; // Store in result array
            size3++;
        }
    }

    printf("Difference (elements in first array not in second):\n");
    for (int i = 0; i < size3; i++) {
        printf("%d ", arr3[i]);
    }
    
    return 0;
}