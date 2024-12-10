#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 5, i;
    int *arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL)return 1;
    
    for(i = 0;i < n;i++){
        arr[i] = i + 1;
    }
    
    // for(i = 0;i < n;i++){
    //     printf("%d", arr[i]);
    // }

    float sum = 0;
    for(i = 0;i < n;i++){
        sum += arr[i];
    }


    float avg = sum/n;
    printf("%.2f", avg);
    free(arr);
    return 0;

}