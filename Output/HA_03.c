

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

#include <stdio.h>
int main()
{
    int arr[4][5];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            arr[i][j] = 10 * i + j;
    }
    printf("%d %d\n", arr[2][4], arr[1][2]);// 24 12
    printf("%d %d", arr[3][3], arr[2][3]);// 33 23
    return 0;
}


