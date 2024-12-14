
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

// 4. allowed
//  struct person{
//  int a;
//  union health{
//  int w;
//  }h;
//  };

// 5. Correct
//  union person {
//      int a;
//      struct health {
//          int e;
//      } h;
//  };

// 6.
//  struct person{
//  int ht;
//  float wt;
//  char color;
//  struct person p; /*Line- 5 */
//  };

// Infinite Recursion in Definition:

// The member struct person p tries to include a complete instance of the same structure inside itself.
// This would imply that struct person contains another struct person, which contains another struct person, and so on indefinitely.
// The compiler cannot allocate memory for such a structure because its size becomes undefined (infinite).
// Valid Use of Self-Referencing:

// Self-referencing in structures is allowed only through pointers because the size of a pointer is fixed (usually 4 or 8 bytes, depending on the system). This avoids the infinite recursion problem.

// 7.
//  (1) union{....}u;//anonymous union with a variable u
//  (2) union u{......};//valid
//  (3) struct{.....}s; // anonymous struct with a variable s
//  (4) struct s{.....};// valid

// 8.
//  int main(){
//  struct student{
//  int h;
//  int w;
//  int m;
//  };
//  struct student s1={20,40,50};
//  struct student *ptr=&s1;
//  printf("%d\n",*(ptr+2));//6422356
//  printf("%d\n",*((int *)ptr+2));// This line works due to pointer arithmetic and type casting.
//  return 0;
//  }

// 9.
//  struct s{int *p;};
//  int main(){int a=200;struct s s1;
//  s1.p=&a; *(s1.p)=*(s1.p)+100;// s1.p points to a, s1.p ==> 300 as well a.
//  printf("%d %d\n",a,*(s1.p));// 300 300
//  return 0;}

// 10.
//  int main(){
//  struct s1{
//  char *z;
//  int i;
//  struct s1 *p;
//  };
//  struct s1 a[]={{"SOA",1,a+1},
//  {"ITER",4,a+2},
//  {"CSE",5,a}
//  };
//  struct s1 *ptr=a;
//  printf("%s %s %s\n",a[0].z,a[1].z,a[2].z);
//  printf("%s %s %s",(*ptr).z, ptr->z,a[2].p->z);
//  return 0;
//  }

// 11.
// int main()
// {
//     struct s1
//     {
//         char *z;
//         int i;
//         struct s1 *p;
//     };
//     struct s1 a[] = {{"SOA", 1, a + 1},
//                      {"ITER", 2, a + 2},
//                      {"CSE", 3, a}};
//     struct s1 *ptr = a;
//     printf("%s\n", ++(ptr->z)); // ++ operator increments the pointer ptr->z to point to the next character in "SOA"=> "OA"
//     printf("%s\n", a[(++ptr)->i].z);// ++ptr ==> a[1], then a[1].i ==> 2,  the a[2]. ==> "CSE"
//     printf("%s\n", a[--(ptr->p->i)].z);//* imp "CSE"
//     printf("%d\n", --a[2].i);
//     return 0;
// }

// 12.
// int main()
// {
//     struct test
//     {
//         int i;
//         char *c;
//     };
//     struct test st[] = {5, "Cse-Engg",
//                         4, "computer",
//                         6, "Electrical",
//                         8, "Mechnical",
//                         7, "All-Engg"};
//     struct test *p = st;
//     printf("%s\n", ++(p++ ->c));
//     printf("%c\n", *p++ ->c);
//     printf("%d\n", ++p ->i);//The -> operator has higher precedence than the ++ operator. So, p->i is evaluated first i.e. ++6  ==> 7
//     printf("%s\n",p[0].c);
//     printf("%s\n",p->c);
//     return 0;
// }

// 13.
// int main(){
//     struct out{
//         char ch[10];
//         char * str;};
//     struct b{
//         char * c;
//         struct out o;};
//     struct b s2 = {"ODISHA", "KHURDA", "JOYDEV"};
//     printf("%s %s %s\n", s2.c, s2.o.str, s2.o.ch);
//     printf("%s %s\n", ++s2.c, ++s2.o.str);
//     return 0;
// }

// 14.
#include <string.h>
typedef struct
{
    char name[30];
    double diameter;
    int moons;
    double or_time, ro_time;
} planet_t;

int main(){
    planet_t p1, p2;
    p1.diameter = 142.34;
    p1.moons = 16;
    p1.or_time = 11.9;
    p1.ro_time = 9.23;
    planet_t *p = &p1;
    strcpy(p1.name, "Jupiter");
    printf("%lf %d %lf %lf %s\n", p1.diameter, p1.moons, p1.or_time, p1.ro_time, p1.name);
    printf("%lf %d %lf %lf %s\n", p->diameter, p->moons, p->or_time, p->ro_time, p->name);

}
//todo: linkedList sorting and date format qns
