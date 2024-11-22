#include <stdio.h>
int main(){
    int a[5] ={2,3};
    int size = sizeof(a)/sizeof(a[0]);
    printf("%d", size);
}