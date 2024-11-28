// #include<stdio.h>
// #define print printf("Symbolic Constants\n")
// int main(){
// print;
// print;
// return 0;
// }

// #include <stdio.h>
// #define AH 65
// int main(){
// printf("%d\n",AH);
// #define AH 41
// printf("%d\n",AH);
// return 0;
// }

// #include<stdio.h>
// #define MMM 10+20
// int main(){
// printf("x=%d\n",MMM*MMM);
// return 0;
// }

// #define MAX (a>b ? a : b)
// int main(){
// int a=77,b=67;
// int c=MAX;
// printf("MAX=%d\n",c);
// printf("%s","MAX");
// return 0;
// }

// #define x (10+10)
// #include <stdio.h>
// int main(){
// int a=x*x;
// printf("%d",a);
// return 0;
// }

// #define x 10+10
// #include <stdio.h>
// #define scanf "%s Practical C Y-N"
// int main(){
// int a=x*x;
// printf("%d\n",a);
// printf(scanf, scanf);
// return 0;
// }

// #define SUM 100
// #include <stdio.h>
// int main(){
// SUM=200;
// printf("%d", SUM);
// return 0;
// }
// #define x 97
// #define x 65
// #include <stdio.h>
// int main(){
// printf("x+x=%d\n",x+x);
// printf("%d %c\n",x,x);
// printf("%d",x+5+x/5);
// return 0;
// }

// #include <stdio.h>// ## token pasting
// #define con(m, a) m##a
// int main(){
// int con(x,3)=120;
// printf("Concat=%d\n",x3);// 120
// con(x,3)=x3+con(12,45);// 120 + 1245 ==> 1365
// printf("Concat=%d\n",x3);// 1365
// printf("con(x,3)=%d\n",con(x,3));// 1365
// return 0;
// }

// #include <stdio.h>
// #define MAX(x) #x
// int main(){
// printf(MAX(ITER));
// return 0;
// }
// # the stringizing operator in C preprocessor directives. If a parameter name (i.e. in #define
// MAX(x) #x) is preceded by a # in the replacement-text, the combination will be expanded into
// a quoted string with the parameter replaced by the actual argument.
// The line:
// printf(MAX(ITER)); expanded to
// printf("ITER");

// #include <stdio.h>
// #define get(s) #s
// int main(){
// char str[]=get(ITER is Good);//ITER is Good
// printf("%s", str);
// return 0;
// }

// #include <stdio.h>
// #define dprintf(expr) printf(#expr "=%d\n",expr)
// int main(){
// int x=17, y=5;
// dprintf(x/y);//x/y=3
// return 0;
// }

// #include <stdio.h>
// #define macro(n, a, i, m) m##a##i##n
// #define MAIN macro(n, a, i, m)
// #define f(g,g2) g##g2
// int MAIN(){
//     int var12 = 100;
//     printf("Preprocessor:operator\n");
//     printf("%d", f(var,12));//concats so, var12 => 100
//     return 0;
// }

// #define square(x) x*x
// int main()
// {
//     int x, a = 4;
//     x = 36 / square(6);// 36
//     printf("%d\n", x);// 36
//     x = square(a + 2);
//     printf("%d", x);//14
//     return 0;
// }

// #include<stdio.h>
// #define MAX abc
// #define abc 100
// int main(){
// printf("MAX in abc=%d\n", MAX);// 100
// return 0;
// }

// #include <stdio.h>
// #define PRINT(int) printf("int=%d\n",int)
// int main(){
// int x=03,y=32,z=01;
// PRINT(x^x);//0
// z<<=3;
// PRINT(z);//8
// y>>=3;
// PRINT(y);//4
// return 0;
// }

// #include <stdio.h>
// #define MIN(x,y) (x)>(y)?(x):(y)
// int main(){
// int i=10,j=9,k=0;
// k=MIN(i++,j++);//k = (i++) > (j++) ? (i++) : (j++); so i => 12, j => 10
// printf("i=%d j=%d k=%d\n",i,j,k);
// return 0;
// }

// #include <stdio.h>
// #define PRINT(i, limit)      \
//     while (i <= limit)       \
//     {                        \
//         printf("i=%d\n", i); \
//         i = i + 1;           \
//     }
// int main()
// {
//     int i = 0;
//     PRINT(i, 6);
//     return 0;
// }