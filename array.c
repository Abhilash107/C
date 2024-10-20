#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    printf("%d", a[0]);
    for (int i = 0; i < sizeof(a); i++)
    {
        /* code */
        printf("%d", a[i]);
    }
    
}