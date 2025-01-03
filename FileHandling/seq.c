#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *filePointer;
    char buffer[256]; // Buffer for reading lines

    // Step 1: Open the file for writing
    filePointer = fopen("example.txt", "w"); // Open in write mode
    if (filePointer == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    // Write data to the file
    fprintf(filePointer, "Line 1: Hello, World!\n");
    fprintf(filePointer, "Line 2: This is file handling in C.\n");
    fclose(filePointer); // Close after writing

    // Step 2: Append additional content
    filePointer = fopen("example.txt", "a"); // Open in append mode
    if (filePointer == NULL) {
        perror("Error opening file for appending");
        return 1;
    }

    // Append new data
    fprintf(filePointer, "Line 3: Appending more data to the file.\n");
    fprintf(filePointer, "Line 4: This is the final line.\n");
    fclose(filePointer); // Close after appending

    // Step 3: Read the entire file sequentially
    filePointer = fopen("example.txt", "r"); // Open in read mode
    if (filePointer == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("Reading File Sequentially:\n");
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer); // Print each line to the console
    }
    fclose(filePointer); // Close after reading

    return 0;
}
