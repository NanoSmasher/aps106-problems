#include <stdio.h>
#define SIZE 10

void Shift(int array[], int num);
void printArray(int array[]);

int main(){
    int array[SIZE], i;
    for (i=0; i<SIZE; i++) array[i] = i+1;
    for(i=1;i<=5;i++) Shift(array,2);
    return 0;
}

void Shift(int array[SIZE], int num){
    while (num > SIZE) num = num-((int)(num/SIZE))*(SIZE);
    if (num >= SIZE) return;
    int newarray[SIZE] = {},i;
    for(i=SIZE-num; i<SIZE; i++) newarray[i-(SIZE-num)] = array[i];
    for(i=0; i<SIZE-num; i++) newarray[i+num] = array[i];
    for (i=0; i<SIZE; i++) array[i] = newarray[i];
    printArray(array);
    return;
}

void printArray(int array[]){
    int i;
    for (i=0; i<SIZE; i++) printf("%d ", array[i]);;
    printf("\n");
    return;
}
