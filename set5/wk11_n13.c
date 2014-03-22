#include <stdio.h>
#include <string.h>
#include <ctype.h>

void no_multiples(char *string){
    int i;
    char c[255] = {};
    for (i=0; i<strlen(string) ;i++){
        if (c[string[i]] && string[i] != ' ') string[i] = ' ';
        else c[string[i]]++;
    }
    return;
}

void main(){
    char string[100],find,replace;
    printf("Enter 100 character string: ");
    gets(string);                 //WARNING! use fgets instead.
    printf("%s\n", string);

    no_multiples(string);
    printf("%s\n", string);
    return;
}
