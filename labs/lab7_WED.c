#include <stdio.h>
#include <ctype.h>

#define SIZE 10

void getText(char[], int);      //Accept (int) characters and store it to an array
void printArray(char[], int);   //Print (int) characters of said array
void insertionSort(char[], int);

void main(){
    char array [SIZE];
    getText(array, SIZE);
    printArray(array,SIZE);
    insertionSort(array, SIZE);
    printArray(array,SIZE);
    return;
}

void getText(char a[], int n){
    int i;
    for (i = 0; i < n; i++) scanf("%c", &a[i]);
    return;
}

void printArray(char a[], int n){
    int i;
    for (i = 0; i < n; i++) printf("%c", a[i]);
    printf("\n");
    return;
}

void insertionSort(char a[], int n){
    int pos, temp;

    for (pos = 1; pos < n; pos++){
        temp = a[pos];                               //store the character to insert

        int i;
        for (i=0; i<pos; i++){                      //loop from the beginning of the arrary to the end
            if (temp < a[i]){                       //the character in that slot is larger then the temp
                int s;
                for (s=pos; s>i; s--)a[s] = a[s-1]; //so we shift everything below that position down by one
                break;                              //and break as we now have a space to insert the character
            }
        }
        a[i] = tmp;                                 /*Insert the character.
                                                      If the i loop never reached the "if" statement,
                                                        then just put it back where it was originally
                                                      Otherwise,
                                                        Put the character in the space created
                                                    */
    }


    return;
}
