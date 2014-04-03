#include <stdio.h>
#include <stdlib.h>

#define SIZE 81

int delete_word(char *A, int pos);
int first_instance(char*, char*);
int get_length(char *A);

void main(){
    char a[SIZE];
    int b, len;
    printf("enter a string A (< 80 chars): ");
    fgets(a, SIZE, stdin);

    printf("enter the position: ");
    scanf("%d", &b);

    printf("original string A: ");
    puts(a);

    if ((len = delete_word(a,b)) != -1){
        printf("\nmodified string A: ");
        puts(a);
        printf("\nlength of the modified A: %d", len);
    } else printf("\nPosition out of range");

    return;
}


int get_length(char *a){
    char *c = a-1;
    int i=0;
    while (*(++c) != '\0') i++;
    return i-1;
}

int delete_word(char *A, int b){
    int word=1, flag=0;
    char *ori = A;

    while(word!=b){
        if (*A == '\0') return -1;
        if (*A == ' ') word++;
        A++;
    }

    char *off=A-1;                ///set up the following pointer
    off++;

    while(*off != ' ' && *off != '\0') {off++; printf("lol\n");}

    if ( *off == ' ') {
        while (*off != '\0'){
            *A = *off;
            off++;
            A++;
        }
    }
    if ( *off == '\0') *A = '\0';

    return get_length(ori);
}
