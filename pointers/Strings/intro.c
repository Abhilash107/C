#include <stdio.h>
int main(){
    char str[40];
    int cnt = 0;
    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);
    // Without &
    printf("%s", str);
    puts(str); // puts() for displaying strings
    // Count length
    for(int i = 0; str[i] != '\0';i++){
        cnt++;
    }
    printf("Length of str: %d\n", cnt - 1);
    //printf("Length of str: %d", (int)strlen(str)); don't use when fgets is used

}