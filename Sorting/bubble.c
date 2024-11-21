#include <stdio.h>
void bubbleSort(int a[], int n){
    for(int i = n-1;i>=0;i--){
        for(int j = 0;j <i;j++){
            if(a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {1,5,3,4,2,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, size);
    for(int i = 0;i<size;i++){
        printf("%d ", arr[i]);
    }
}
