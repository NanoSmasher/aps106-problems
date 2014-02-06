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
    int first=1, read=0;

    if (fp == NULL || cf == NULL) {
        printf("ERROR: Could not open file.");
        return -1;
    }

    while((fscanf(fp,"%d",&read)) != EOF){
        if (first) {fprintf(cf, "%d", read); first=!first;}
        else fprintf(cf, "\n%d", read);
    }

    fclose(fp);
    fclose(cf);

    return 0;
}
