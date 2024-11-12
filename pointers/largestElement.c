#include <stdio.h>
int main(){
    int nums[] = {1, 3, 5, 7, 9};
    //printf("Array address: %p\n",nums);
    int size = sizeof(nums)/sizeof(nums[0]);

    int *ptr = nums;
    
    int largest = *ptr;


    for(int i = 0; i < size;i++){
       if(largest < *(ptr + i)) largest = *(ptr + i);
    }

    printf("%d", largest);




}