#include <stdio.h>
#include <stdlib.h>
void findValue(int *num){
    *num = 10;
}

int *square2(int *n){
    int *res = malloc(sizeof(int)); 
    *res = *n * *n;
    return res;
}

int square1(int *n){
    return (*n) * (*n);
}

int main(){
    int number = 2;
    //findValue(&number);
    int *sq2 = square2(&number);
    int sq1 = square1(&number);


    printf("%d\n", number);
    printf("Square: %d\n", *sq2);
    printf("Square: %d\n", sq1);



}


