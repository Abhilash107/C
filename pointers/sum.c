#include <stdio.h>
int *add(int *a, int *b, int *sum){
    *sum = *a + *b;
    return sum;
}

int *multiply(int *a, int *b, int *product){
    *product = (*a) * (*b);
    return product;
}

int main(){
    int n1 = 10;
    int n2 = 9;
    int sum;
    int product;
    add(&n1, &n2, &sum);
    multiply(&n1, &n2, &product);
    printf("%d\n", sum);
    printf("%d", product);
    

}