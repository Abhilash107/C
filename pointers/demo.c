#include <stdio.h>
int main(){
    // int a = 5;
    // int b = 10;
    
    // int *ptr1 = &a, *ptr2 = &b;
    // printf("%p %p\n", ptr1, ptr2);
    // int temp = a;
    // a = b;
    // b = temp;
    // printf("%d %d\n", *ptr1, *ptr2);
    
    int num = 50;  // Declare and initialize an integer variable
    int *p1 = &num; // First pointer pointing to num
    int *p2 = &num; // Second pointer pointing to num
    int *p3 = &num; // Third pointer pointing to num

    printf("Value of num using p1: %d\n", *p1);
    printf("Value of num using p2: %d\n", *p2);
    printf("Value of num using p3: %d\n", *p3);

    // Update the value of num using p2
    *p2 = 100;
    printf("Updated value of num using p2: %d\n", *p3);
    printf("Updated value of num using p2: %d\n", *p2);
    printf("Updated value of num using p2: %d\n", *p1);

    // printf("%p %p", ptr1, ptr2);




}
