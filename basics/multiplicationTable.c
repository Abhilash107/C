#include <stdio.h>
int main(){
    int n = 10;
    for(int i = 1;i<=n;i++){
        printf("%d\t",i * 8);
    }
    printf("\n");


    for(int i = 1;i<=n;i++){
        printf("%d\t",i);
    }
    printf("\n");
    for(int i = 1;i<=n;i++){
        printf("8\t");
    }
}