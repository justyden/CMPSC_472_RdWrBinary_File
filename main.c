//-----------------------------------------------------------
// Tyler Thompson CMPSC 472 Spring 2024
// Team Member Eric Estadt
//
// This application is a team oriented. The goal of this
// specific file is to write binary to a file given
// input. The other file will read the binary, in which
// the output should match the input. A .h file is created
// to ensure that there is synchronization between the files.
//-----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CMPSC472_BinaryFile_Data.bin.h"

void writeToFileBinary() {
    // Pointer to the file, if the file does not exist create it. If it does, overwrite it.
    FILE *filePtr = fopen(FILENAME, "wb");

    if (filePtr == NULL) {
        printf("An error occurred when opening the file.\n");
        exit(1);
    }

    // Create the struct from the .h file.
    struct Data data;
    data.a = 10;
    data.b = 'X';
    data.d = 3.14;
    data.e = 100000;
    strcpy(data.f, "Hello");

    // Write to information to the file.
    fwrite(&data, sizeof(struct Data), NUM_RECORDS, filePtr);


    fclose(filePtr); // Close the file.

    printf("The file containing binary information was created.\n");
}

int main() {
    // Create and write to the binary file.
    writeToFileBinary();
}
