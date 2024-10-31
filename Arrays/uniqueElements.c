#include <stdio.h>
# define MAX 10
int main(){
     int arr[] = {70, 7, 4, 5, 6, 5, 4, }; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int count[MAX] = {0};

    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // Find and print unique elements
    printf("Unique elements: ");
    for (int i = 0; i < MAX; i++) {
        // if (count[i] == 1) { // Check if the count is 1
        //     printf("%d ", i); // Print the unique element
        // }
        printf("%d ", count[i]);
    }
    //printf("\n");

    return 0;
    
}