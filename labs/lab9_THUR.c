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
    int pos=0, word=1, off, flag=0;


    do{
        if ( *(A+pos) == ' ' ) word++;

        if (word==b) {
            flag=1;         //We found it!



            off=pos;
            do{
                off++;
                if ( *(A+off) == '\0') {
                    *(A+pos) = '\0';
                    break;
                }
                if ( *(A+off) == ' ') {
                    while (*(A+off) != '\0'){
                        *(A+pos) = *(A+off);
                        off++;
                        pos++;
                    }
                    *(A+pos) = '\0';
                    break;
                }
            } while(1);
        }


        pos++;
    } while(*(A+pos) != '\0');

    if (flag) return get_length(A);
    else return -1;
}
