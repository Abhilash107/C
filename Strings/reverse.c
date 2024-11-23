#include <stdio.h>
#include <string.h> // For strlen

void reverseString(char *str);
int main(){
    char str[] = {'a', 'b', 'c', '\0'};
    reverseString(str);
    printf("%s", str);
   
}

void reverseString(char *str) {
    char *start = str; 
    char *end = str + strlen(str) - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

