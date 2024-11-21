#include <stdio.h>
int search(int a[], int size, int target){
    
    int l = 0, h = size - 1;
    while(l <= h){
        int mid = (l + h)/2;
        if(a[mid] == target) return mid + 1;
        else if(a[mid] < target) l = mid + 1;
        else h = mid - 1;
    }
    return -1;
}
int main(){
    int arr[] = {3,4,5,6,7,8,77,88};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = search(arr, size, 4);
    if( result != -1)
        printf("Position: %d", result);
    else
        printf("Not found");


}

