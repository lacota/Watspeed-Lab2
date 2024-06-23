#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 256
#define FILENAMESIZE 246

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
    // Ensure that the user supplied exactly one command line argument
    if (argc != 2) {
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }
    char cmd[BUFSIZE] = "wc -c < %s";
    //strncat(cmd, argv[1], FILENAMESIZE);
    char command2[1000] = { 0 };
    sprintf(command2, cmd, argv[1]);
    system(command2);
}