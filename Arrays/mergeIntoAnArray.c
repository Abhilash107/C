#include <stdio.h>
int main(){
    int arr1[] = {1, 3,3, 4,  5, 5, 7, 9};   // Sorted array 1
    int arr2[] = {2, 4, 6, 8, 10};  // Sorted array 2
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[size1+size2];

    int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2){
        if(arr1[i] > arr2[j]){
            arr3[k] = arr2[j];
            k++;j++;
        }
        else if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;i++;
        }
        else{
            arr3[k] = arr1[i];
            k++;i++;
            arr3[k] = arr2[j];
            k++;j++;
        }
        // Not adding duplicates
        // else{
        //     arr3[k] = arr1[i];
        //     i++;j++;
        // }
    }

    while(i < size1){
        arr3[k] = arr1[i];
        i++;k++;
    }
    while(j < size2){
        arr3[k] = arr2[j];
        j++;k++;
    }

    for(int i = 0;i< k;i++){
        printf("%d ", arr3[i]);
    }

}