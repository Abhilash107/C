#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *a, int size) {
    // for (int i = 0; i < size / 2; i++) {
    //     int temp = arr[i];
    //     arr[i] = arr[size - 1 - i];
    //     arr[size - 1 - i] = temp;
    // }
    int l = 0, h = size - 1;
    while (l <= h){
        int t = a[l];
        a[l] = a[h];
        a[h] = t;
        l++;h--;
    }
    
}


int main(){
    int n = 5;
    int *a = (int *)malloc(n * sizeof(int));
    if(a == NULL) return 1;
    for(int i = 0;i < n;i++){
        a[i] = i + 1;
    }
    for(int i = 0;i < n;i++){
        printf("%d ", a[i]);
    }

    // for(int i = 0;i < n/2;i++){
    //     int temp = a[i];
    //     a[i] = a[n - 1- i];
    //     a[n - 1 - i] = temp;
    // }
    reverseArray(a, n);

    printf("\nReversed: ");
    for(int i = 0;i < n;i++){
        printf("%d ", a[i]);
    }

    free(a);
}