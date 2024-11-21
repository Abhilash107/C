#include <stdio.h>
void insertionSort(int a[], int n){
    for(int i = 0;i < n;i++){
        int j = i;
        while(j > 0 && a[j -1] > a[j]){
            //swap
            int temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            j--;
        }
    }

}

int main(){
    int arr[] = {1,5,3,4,2,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, size);
    for(int i = 0;i<size;i++){
        printf("%d ", arr[i]);
    }
}