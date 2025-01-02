#include <stdio.h>
#include <stdlib.h>

struct Record {
    int id;
    char name[20];
    float salary;
};

int main() {
    FILE *filePointer;
    struct Record records[3] = {
        {1, "Alice", 50000.0},
        {2, "Bob", 60000.0},
        {3, "Charlie", 70000.0}
    };
    struct Record readRecord; // Declare readRecord here

    // Step 1: Write records to the file
    filePointer = fopen("records.bin", "wb"); // Open file in binary write mode
    if (filePointer == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    fwrite(records, sizeof(struct Record), 3, filePointer); // Write all records
    fclose(filePointer);

    // Step 2: Read a specific record using fseek and fread
    filePointer = fopen("records.bin", "rb"); // Open file in binary read mode
    if (filePointer == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("Random Access using fseek and ftell:\n");

    // Move to the second record (index 1) using fseek
    fseek(filePointer, sizeof(struct Record) * 1, SEEK_SET);

    // Get current position using ftell
    long position = ftell(filePointer);
    printf("Current file pointer position: %ld bytes\n", position);

    // Read the second record
    fread(&readRecord, sizeof(struct Record), 1, filePointer);
    printf("Record ID: %d, Name: %s, Salary: %.2f\n", readRecord.id, readRecord.name, readRecord.salary);

    fclose(filePointer);

    // Step 3: Sequentially read all records
    filePointer = fopen("records.bin", "rb"); // Open file again in binary read mode
    if (filePointer == NULL) {
        perror("Error opening file for sequential reading");
        return 1;
    }

    printf("\nSequential Access:\n");
    while (fread(&readRecord, sizeof(struct Record), 1, filePointer) == 1) {
        printf("Record ID: %d, Name: %s, Salary: %.2f\n", readRecord.id, readRecord.name, readRecord.salary);
    }
    fclose(filePointer);

    return 0;
}
