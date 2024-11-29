

// int main(){
// int x=2,y=5,i;
// int a[]={A(x,y),A(5,5)};
// for(i=0;i<2;i++){
// printf("%d ",a[i]);//10 25

// }printf("%d", f(20, 10));
//  return 0;}
// int A(int x, int y)
// {
// return(x*y);
// }

// #include <stdio.h>
// int SimpleFunction(int Y[], int n, int x)
// {
//     int total = Y[0], loopIndex;
//     for (loopIndex = 1; loopIndex <= n - 1; loopIndex++){ if(loopIndex == 3){break;}
//         total = x * total + Y[loopIndex];}

//     return total;
// }

// int main(){
//     int z[] = {0,1,2,3,4,5,6,7,8,9};
//     int res = SimpleFunction(z, 10, 2);
//     printf("%d", res);
// }

// #include <stdio.h>
// int main()
// {
//     int arr[4][5];
//     int i, j;
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 5; j++)
//             arr[i][j] = 10 * i + j;
//     }
//     printf("%d %d\n", arr[2][4], arr[1][2]);// 24 12
//     printf("%d %d", arr[3][3], arr[2][3]);// 33 23
//     return 0;
// }

// 4.
// int pp(int a, int b)
// {
//     int arr[20];
//     int i, tot = 1, ex, len;
//     ex = a;
//     len = tob(b, arr);
//     for (i = 0; i < len; i++)
//         printf("%d\n", arr[i]);
//     for (i = 0; i < len; i++)
//     {
//         if (arr[i] == 1)
//             tot = tot * ex;
//         ex = ex * ex;
//     }
//     return (tot);
// }

// int tob(int b, int *arr)
// {
//     int i;
//     for (i = 0; b > 0; i++)
//     {
//         if (b % 2)
//             arr[i] = 1;
//         else
//             arr[i] = 0;
//         b = b / 2;
//     }
//     return (i);
// }
// int main()
// {
//     printf("%d", pp(3, 4));// 0 0 1 81
//     return 0;
// }

// 5.
// void f1(int a[],
//         int n)
// {
//     a[1] = 10;
// }
// void f2(int a[],
//         int n)
// {
//     a[0] = 2 * n;
//     a[4] = n / 2;
// }
// void f3(int a[], int
//                      n)
// {
//     a[2] = 4 * n;
//     a[3] = 50;
// }
// int main()
// {
//     int a[5], i;
//     f1(a, 5);
//     f2(a, 5);
//     f3(a, 5);
//     for (i = 0; i < 5; i++)
//         printf("%d ", a[i]);// 10 10 20 50 2
//     return (0);
// }

// 6.
//  #include<stdio.h>
//  int main(){
//  int arr[]={1,2,3,4,5,6,7,8,9,0,1,2,5};
//  int *ip=arr+4;// ip => 5;
//  printf("%d\n",ip[1]);// ip[1] => 6
//  return 0;
//  }

//7. //!imp
// #include <stdio.h>
// void f(int *p, int m)
// {
//     m = m + 5;// j = 15
//     *p = *p + m;// 20
//     return;
// }
// void main()
// {
//     int i = 5, j = 10;// i's address is passed so i => 20
//     f(&i, j);//j remains 10 (unchanged, as m was passed by value).
//     printf("%d", i + j);
// }

//8.
// int main(){
// char s1[7]="1234",*p;
// p=s1+2;// p points to 3
// *p='0';
// printf("%s", s1);//1204
// }

//9. //!imp
// int f1(int a, int b){
// int c;
// c=a;
// a=b;
// b=c;
// }
// int f2(int *a,int *b){
// int c;
// c=*a;
// *a=*b;
// *b=c;
// }
// int main(){
// int a=4,b=5,c=6;
// f1(a,b);//These changes only affect the local copies of a and b within f1. The values of a and b in main remain unchanged.
// f2(&b,&c);
// printf("%d",c-a-b);
// }

// #include <stdio.h>
// int main()
// {
// int i;
// int *pi=&i;
// scanf("%d",pi);// whatever the input gets stored in i
// printf("%d\n",i+5);// i + 5
// return 0;
// }

