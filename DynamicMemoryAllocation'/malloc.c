#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 5, i;
    int *arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL)return 1;
    
    for(i = 0;i < n;i++){
        scanf("%d", &arr[i]);
    }
    
    for(i = 0;i < n;i++){
        printf("%d", arr[i]);
    }
    free(arr);
    return 0;

}