#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenateStrings(const char* str1, const char* str2) {
    // Calculate the length of the resulting string
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    int totalLength = length1 + length2;

    // Allocate memory for the concatenated string
    char* result = (char*)malloc((totalLength + 1) * sizeof(char)); //* +1 for null terminator
    if (result == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    // Copy the first string into the result
    strcpy(result, str1);

    // Append the second string to the result
    strcat(result, str2);

    return result; // Return the concatenated string
}

int main() {
    char str1[100] = "1 2 3 ", str2[100] = "4 5 6";

   
    char* concatenated = concatenateStrings(str1, str2);

    if (concatenated != NULL) {
        printf("Concatenated string: %s\n", concatenated);
        free(concatenated); // Free the allocated memory
    }

    return 0;
}
