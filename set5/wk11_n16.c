#include <stdio.h>
#include <string.h>
#include <ctype.h>

void no_multiples(char *string){
    int i,j;
    for (i=0; i<strlen(string) ;i++){
        if (string[i] == ' ' && i!=(strlen(string)-1)) {    //because a spaces at the end means moot
            for (j=i+1;j<strlen(string);j++){               //this is to shift everyting right of character 1 left (to erase character)
                string[j-1] = string[j];
            }
            string[strlen(string)-1] = '\0';                //don't forget to remove the last character!
            *(string+i) = toupper(*(string+i));
            i--;
        }
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
