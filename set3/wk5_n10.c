#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE = 10

void find_and_replace(char *s, char f, char r){
    int i;
    for (i=0; i<strlen(s) ;i++)if (*(s+i) == f) *(s+i) = r;
    return;
}

void main(){
    char string[SIZE],find,replace;
    printf("Enter a string: ");
    fgets(string, SIZE, stdin);
    printf("Replace what char?: ");
    scanf(" %c", &find);                //being lazy
    printf("With what char: ");
    scanf(" %c", &replace);
    find_and_replace(string,find,replace);
    printf("Modified string: %s", string);
    return;
}
