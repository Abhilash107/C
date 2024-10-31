#include <stdio.h>
int main(){
    int arr[10];
    int elements = 1;
    int position = 2;
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < 5 ; i++){
        arr[i] = elements;
        elements++;
    }

    if(position <= 5 && position > 0){
        for(int i = position-1; i < size;i++){
            arr[i] = arr[i+1];
        }
    }

    for (int i = 0; i < 4; i++){
        printf("%d ", arr[i]);
    }
    
}