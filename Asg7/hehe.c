
// 1.
#include <stdio.h>
// struct oswcourse
// {
//     int secid;
//     float avgm;
//     char present;
//     int *marks();
//     int teacher();
// } o1, o2;
// error: field 'marks' declared as a function
//      int *marks();
//           ^~~~~
// hehe.c:8:9: error: field 'teacher' declared as a function
//      int teacher();

// 2.

// struct date{
// int m,d,y;
// };
// struct stud{
// char name[20];
// struct stud *p;
// struct date *d;
// int (*)fun(int, int);
// //expected identifier or '(' before ')' token
// // int (*)fun(int, int);

// };

// 3.==> allowed
// struct person
// {
//     int a;
//     struct health
//     {
//         int a;
//     } h;
// };

//4. allowed
// struct person{
// int a;
// union health{
// int w;
// }h;
// };

//5. Correct
// union person {
//     int a;
//     struct health {
//         int e;
//     } h;
// };


//6.
// struct person{
// int ht;
// float wt;
// char color;
// struct person p; /*Line- 5 */
// };

// Infinite Recursion in Definition:

// The member struct person p tries to include a complete instance of the same structure inside itself.
// This would imply that struct person contains another struct person, which contains another struct person, and so on indefinitely.
// The compiler cannot allocate memory for such a structure because its size becomes undefined (infinite).
// Valid Use of Self-Referencing:

// Self-referencing in structures is allowed only through pointers because the size of a pointer is fixed (usually 4 or 8 bytes, depending on the system). This avoids the infinite recursion problem.


//7.
// (1) union{....}u;//anonymous union with a variable u
// (2) union u{......};//valid
// (3) struct{.....}s; // anonymous struct with a variable s
// (4) struct s{.....};// valid

//8.
// int main(){
// struct student{
// int h;
// int w;
// int m;
// };
// struct student s1={20,40,50};
// struct student *ptr=&s1;
// printf("%d\n",*(ptr+2));//6422356
// printf("%d\n",*((int *)ptr+2));// This line works due to pointer arithmetic and type casting.
// return 0;
// }

//9.
// struct s{int *p;};
// int main(){int a=200;struct s s1;
// s1.p=&a; *(s1.p)=*(s1.p)+100;// s1.p points to a, s1.p ==> 300 as well a.
// printf("%d %d\n",a,*(s1.p));// 300 300
// return 0;}


//10.
// int main(){
// struct s1{
// char *z;
// int i;
// struct s1 *p;
// };
// struct s1 a[]={{"SOA",1,a+1},
// {"ITER",4,a+2},
// {"CSE",5,a}
// };
// struct s1 *ptr=a;
// printf("%s %s %s\n",a[0].z,a[1].z,a[2].z);
// printf("%s %s %s",(*ptr).z, ptr->z,a[2].p->z);
// return 0;
// }

//11.
