#include <stdio.h>
#include <stdlib.h>

#define FILENAME "grades.txt"

int main(){
    /*
    On BB I’ve posted a file grades.txt that contains a list of integer grades. Write a program that opens that file,
    reads all of the grades, and writes the following information to the screeen: the total number of grades,
    the number of grades above and below 50, and the average grade.
    */

    FILE *fp = fopen(FILENAME, "r");
    int num=0,sum=0,above=0,below=0,count=0;

    if (fp == NULL) {
        printf("ERROR: Could not open file.");
        return -1;
    }

    while((fscanf(fp,"%d",&num)) != EOF){
        if (num>50) above++;
        if (num<50) below++;
        sum += num;
        count++;
    }

    printf("Total number of grades: %d\n",count);
    printf("Grades above 50: %d\n",above);
    printf("Grades below 50: %d\n",below);
    printf("Average grade (mean): %.2f%%\n", (float)sum/count);

    fclose(fp);
    return 0;
}
