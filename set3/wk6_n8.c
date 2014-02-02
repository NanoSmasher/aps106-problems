#include <stdio.h>
#include <stdlib.h>

#define FILENAME "grades.txt"
#define COPY "grades_copy.txt"

int main(){
    /*
    Another quick question. Write a program that creates a copy of grades.txt, by reading each grade from the original file,
    and then immediately writing that value to a file of a different name.
    */

    FILE *fp = fopen(FILENAME, "r");
    FILE *cf = fopen(COPY, "w");
    char read;

    if (fp == NULL || cf == NULL) {
            printf("ERROR: Could not open file.");
            exit(EXIT_FAILURE);
    } else while((read = getc(fp)) != EOF) putc(read, cf);

    fclose(fp);
    fclose(cf);

    return 0;
}
