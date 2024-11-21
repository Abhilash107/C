#include <stdio.h>
void sumarr(int a[], int b[], int r[], int size){
    for(int i = 0;i< size;i++){
        r[i] = a[i] + b[i];
    }

}

int main() {
    int a[] = {5, -1, 7};
    int b[] = {2, 4, -2};
    int size = sizeof(a) / sizeof(a[0]);  // Determine the size of the arrays
    int r[size];  // Declare the result array with the same size

    sumarr(a, b, r, size);  // Call the function to sum arrays a and b

    // Print the result array
    for (int i = 0; i < size; i++) {
        printf("%d ", r[i]);
    }
    printf("\n");

    return 0;
}