#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalize(char *sentence){
    int i;
    *sentence = toupper(*sentence);
    for (i=1; i<strlen(sentence) ;i++)if (*(sentence+i-1) == ' ') *(sentence+i) = toupper(*(sentence+i));
    return;
}

void main(){
    char string[100],find,replace;
    printf("Enter 100 character string: ");
    gets(string);                 //WARNING! use fgets instead.
    printf("%s\n", string);

    capitalize(string);
    printf("%s\n", string);
    return;
}
