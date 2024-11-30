#include <stdio.h>
#include <String.h>
struct info{
    char name[10];
    int marks;
};

void display(struct info *s){
    printf("%s\n", s->name);
    printf("%d\n", s->marks);
}

int main(){
    struct info student1;
    strcpy(student1.name, "Abhilash");
    student1.marks = 98;
    display(&student1);

}