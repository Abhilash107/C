// char 1byte
// short 2byte
// int 4byte
// long 8byte
// float 4byte
// double 8byte

#include <stdio.h>

int main() {
    // Write C code here
    int age = 19;
    //printf("%p\n", &age);
    int* ptr = &age;
    //printf("%p", ptr);// same as above
    printf("Address:  %p\n", ptr);
    printf("Value :%d\n", *ptr);

    *ptr = 20;
    printf("%d\n", age);// change the value of age variable

    
    return 0;
}