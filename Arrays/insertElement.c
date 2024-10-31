#include <stdio.h>
int main(){
    int arr[10];
    int insert_element = 10;
    int elements = 1;
    int position = 2;
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < 5 ; i++){
        arr[i] = elements;
        // printf("%d - %d\n", arr[i], elements);
        elements++;
    }

    if(position <= 5 && position > 0){
        for(int i = 5; i >= position-1;i--){
            arr[i] = arr[i-1];
        }
        arr[position-1] = insert_element;
        //printf("%d", arr[position-1]);
    }
    for (int i = 0; i < 6; i++){
        printf("%d ", arr[i]);
    }
    
    



    
    


}