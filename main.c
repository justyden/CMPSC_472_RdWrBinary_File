//-----------------------------------------------------------
// Tyler Thompson CMPSC 472 Spring 2024
//
// This application is a team oriented. The goal of this
// specific file is to write binary to a file given
// input. The other file will read the binary, in which
// the output should match the input. A .h file is created
// to ensure that there is synchronization between the files.
//-----------------------------------------------------------

#include <stdio.h>
#include "CMPSC472_BinaryFile_Data.bin.h"

void writeToFileBinary() {
    FILE *filePtr;
    filePtr = fopen(FILENAME, "wb");
    if (filePtr == NULL) {
        printf("An error occurred when opening the file..\n");
        exit(1);
    }

int main() {
    printf("Hello, World!\n");
    return 0;
}
