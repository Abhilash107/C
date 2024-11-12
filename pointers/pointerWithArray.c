#include <stdio.h>
int main(){
    int nums[] = {1, 3, 5, 7, 9};
    printf("Array address: %p\n",nums);
    int size = sizeof(nums)/sizeof(nums[0]);

    

    //changes the value of array elements using pointers
    *nums = 2;
    *(nums+ 4)= 11;
    printf("%d\n", *nums);
    printf("%d\n\n", *(nums + 4));

    for(int i = 0; i < size;i++){
        //printf("%d -> %p\n",nums[i], &nums[i]);
        printf("%d -> %p\n",*(nums + i), nums + i);
    }




}