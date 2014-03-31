#include <stdio.h>
#include <stdlib.h>

#define SIZE 80

void setString(char*, int);
void getString(char*);
int first_instance(char*, char*);

void main(){
    char a[SIZE], b[SIZE];
    printf("enter a string A (< 80 chars): ");
    setString(a, SIZE);

    printf("enter a string B (< 80 chars): ");
    setString(b, SIZE);

    printf("String A: ");
    getString(a);
    printf("\nString B: ");
    getString(b);

    //When I'm bored
    (first_instance(a,b) != -1) ? printf("\nstring B offset %d chars from beginning of A", first_instance(a,b)) : printf("\nString B can not be found in string A");
    return;
}

void setString(char *a, int n){
    int i=0;
    char c;
    while (i < n){
        scanf("%c", &c);
        if (c == '\n') break;
        *(a+i) = c;
        i++;
    }
    *(a+i) = '\0';
    fflush(stdin);
    return;
}

void getString(char *a){
    char *c = a-1;
    while (*(++c) != '\0') putchar(*c);
    return;
}

int first_instance(char *A, char *B){
    int pos=0, off;

    do{
        if ( *(A+pos) == *(B) ){
            off=0;
            do{
                off++;
                if ( *(B+off) == '\0') return pos;
                if ( *(A+pos+off) != *(B+off) || *(A+pos+off) == '\0') break;
            } while(1);
        }
        pos++;
    } while(*(A+pos) != '\0');

    return -1;
}
