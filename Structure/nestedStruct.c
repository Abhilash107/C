#include <stdio.h>
#include <string.h>

struct outer{
    int mark,age;
    float avg;
    struct inner{
        char name[20];
        char grade;
    }innerInstance;
};

void display(struct outer *s){
    printf("%s\n", s->innerInstance.name);// !imp
    printf("%d\n", s->mark);
    printf("%d\n", s->age);
    printf("%c\n", s->innerInstance.grade);// !imp
    //s.innerInstance.name in the display function should be s->innerInstance.name because s is a pointer.


}

int main(){
    struct outer outerInstance;
    outerInstance.age = 23;
    outerInstance.mark = 89;
    outerInstance.avg = 78.9;
    outerInstance.innerInstance.grade = 'A';
    strcpy(outerInstance.innerInstance.name, "Abhilash");
    display(&outerInstance);
}
