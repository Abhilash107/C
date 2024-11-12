#include <stdio.h>
int main(){
    double a = 10.5;
    double *ptr = &a;
    printf("%lf\n", a);
    printf("%p\n", ptr);
    printf("%lf\n\n", *ptr);

    *ptr = a * 10;
    
    printf("%lf\n", a);
    printf("%p\n", ptr);// same as above
    printf("%lf", *ptr);
    
}