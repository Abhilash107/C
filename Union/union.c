#include <stdio.h>
#include <string.h>


union person{
    int age;
    char name[10];
};

int main(){
    union person p;
    p.age = 10;
    //strcpy(p.name, "Abhi");
    printf("%s", p.name);
    printf("%d", p.age);
}

//A union in C is a special data type that allows you to store different types of data in the same memory location. It is similar to a struct, but in a union, all the members share the same memory space. This means that at any given time, a union can only store a value for one of its members.

