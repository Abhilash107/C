#include <stdio.h>
#include <string.h>

typedef struct{
    int x;
    char name[10];
}point;

void display(point p){
    printf("%s\n", p.name);
    printf("%d\n", p.x);
}

void displayPointer(point *p){
    printf("%s\n", p->name);
    printf("%d\n", p->x);
}

int main(){
    point p;
    strcpy(p.name, "John");
    p.x = 10;
    display(p);
    displayPointer(&p);

    
}



