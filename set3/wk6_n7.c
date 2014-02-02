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
    char letter;
    int num=0,sum=0,above=0,below=0,count=0;

    if (fp == NULL) {
            printf("ERROR: Could not open file.");
            exit(EXIT_FAILURE);
    } else {
        do{
            num = 10*(getc(fp)-48) + getc(fp)-48;   //Numerical values start at 48: char('0') = 48
            letter = getc(fp);                      //Abusing the file input, knowing it has EXACTLY 2 characters per line,
                                                    //  so please in put more safety measures when you do it.

            if (num>50) above++;
            if (num<50) below++;
            sum += num;
            count++;
        } while (letter != EOF);
    }

    printf("Total number of grades: %d\n",count);
    printf("Grades above 50: %d\n",above);
    printf("Grades below 50: %d\n",below);
    printf("Average grade (mean): %.2f\n", 1.*sum/count);

    fclose(fp);
    return 0;
}
