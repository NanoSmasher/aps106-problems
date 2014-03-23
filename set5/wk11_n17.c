#include <stdio.h>
#include <ctype.h>

#define SIZE 5

void TLBR(int[][SIZE]);
void BLTR(int[][SIZE]);
void Print(int[][SIZE]);

void main(){
    int array[SIZE][SIZE],i,j,n=1;
    for (i=0;i<SIZE;i++) for(j=0;j<SIZE;j++) array[i][j] = j+i*5+1;
    Print(array);
    TLBR(array);
    BLTR(array);
    TLBR(array);
    BLTR(array);
    return;
}

void TLBR(int a[][SIZE]){
    int b[SIZE][SIZE],i,j;
    for (i=0;i<SIZE;i++) for(j=0;j<SIZE;j++) b[j][i] = a[i][j]; //to flip
    for (i=0;i<SIZE;i++) for(j=0;j<SIZE;j++) a[i][j]=b[i][j];   //and rewrite
    Print(a);
    return;
}
void BLTR(int a[][SIZE]){
    int b[SIZE][SIZE],i,j;
    for (i=0;i<SIZE;i++) for(j=0;j<SIZE;j++) b[SIZE-j-1][SIZE-i-1] = a[i][j]; //to flip
    for (i=0;i<SIZE;i++) for(j=0;j<SIZE;j++) a[i][j]=b[i][j];                 //and rewrite
    Print(a);
    return;
}

void Print(int a[][SIZE]){
    int i,j;
    printf("\n");
    for (i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return;
}
