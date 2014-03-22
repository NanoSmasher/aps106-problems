#include <stdio.h>
#include <string.h>
#include <ctype.h>

void find_and_replace(char *s, char f, char r){
    int i;
    for (i=0; i<strlen(s) ;i++)if (*(s+i) == f) *(s+i) = r;
    return;
}

void main(){
    char string[10],find,replace;
    printf("Enter a string: ");
    scanf("%s", &string);
    while(getchar()!='\n');
    printf("Replace what char?: ");
    scanf("%c", &find);                 //the lazy way.
    while(getchar()!='\n');
    printf("With what char: ");
    scanf("%c", &replace);
    while(getchar()!='\n');
    find_and_replace(&string,find,replace);
    printf("Modified string: %s", string);
    return;
}
