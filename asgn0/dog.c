#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int printUserInput() {
    char nextLine[100] = "";

    bool reachedEOF = false;
    while (!reachedEOF){
        reachedEOF = true;
    }

    return 0;
}

int printFile(char* fileName) {
    return 0; 
}

int main(int argc, char *argv[]) {
    printf("start");
    if (argc == 1) { // no files, just read stdin
        printUserInput();
    } else {
        for (int i = 1; i < argc; i++) { // for every file...
            if (strcmp(argv[i], "-") == 0) { // the next item is a '-'
                printf("user input");
                printUserInput();
            } else {
                printf("file");
                printFile(argv[i]);
            }
        }
    }
    return 0;
}

