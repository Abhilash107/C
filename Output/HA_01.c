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

 //#include<stdio.h>
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

#include <stdio.h>// ## token pasting
#define con(m, a) m##a
int main(){
int con(x,3)=120;
printf("Concat=%d\n",x3);// 120
con(x,3)=x3+con(12,45);// 120 + 1245 ==> 1365
printf("Concat=%d\n",x3);
printf("con(x,3)=%d\n",con(x,3));
return 0;
}









