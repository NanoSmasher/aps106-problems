#include <stdio.h>

void sort_three(int *v1, int *v2, int *v3){
    int tmp;
    if (*v1 > *v2) {tmp = *v2; *v2 = *v1; *v1 = tmp;}
    if (*v1 > *v3) {tmp = *v3; *v3 = *v1; *v1 = tmp;}
    if (*v2 > *v3) {tmp = *v2; *v2 = *v3; *v3 = tmp;}
    return;
}

void main(){
    int a,b,c;
    printf("Enter three numbers like '#, #, #': ");
    scanf("%d,%d,%d", &a,&b,&c);
    sort_three(&a,&b,&c);
    printf("Sorted: %d,%d,%d", a,b,c);
    return;
}
