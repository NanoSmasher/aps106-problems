#include <stdio.h>
#include <ctype.h>

void insertionSort(char[]);

void main(){
    char string[100];
    printf("Type away!: ");
    gets(string);
    insertionSort(string);
    printf("%s", string);
    return;
}

/** Refer to lab7_WED.c for code**/
void insertionSort(char a[]){
int pos,temp;for(pos=1;pos<strlen(a);pos++){temp=a[pos];int i;for(i=0;i<pos;i++){if(temp<a[i]){int s;for(s=pos;s>i;s--)a[s]=a[s-1];break;}}a[i]=temp;}return;
}
