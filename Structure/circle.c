#include <stdio.h>
#define PI 3.14
struct circle{
    float radius;
};
void area(struct circle *c){
    printf("%f\n", (PI * c->radius * c->radius));
}

void perimeter(struct circle *c){
    printf("%f\n", (2 * PI * c->radius));
}

int main(){
    struct circle c;
    c.radius = 1.0;
    perimeter(&c);
    area(&c);

}