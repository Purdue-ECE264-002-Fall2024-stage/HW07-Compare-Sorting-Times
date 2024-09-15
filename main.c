// ***
// *** Do NOT submit this file.
// ***

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sorting.h"

int main(int argc, char ** argv) {
    // check correct number of arguments are passed
    if (argc != 2) {
        printf("Usage: ./hw07 <size>\n");
        return EXIT_FAILURE;
    }

    if(atoi(argv[1]) % 10 != 0) {
        printf("Size must be a multiple of 10\n");
        return EXIT_FAILURE;
    }

    char filename[256];
    for (int i = 10; i <= atoi(argv[1]); i*=10) {
        sprintf(filename, "inputs/array%d.bin", i);
        getSortingTime(i, filename);
    }

    return 0;
}
