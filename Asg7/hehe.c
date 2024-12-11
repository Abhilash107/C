
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

//4.
