#include <stdio.h>
#include <stdlib.h>

int main () {
    int a;
    printf("Enter 3 digit num: ");
    scanf("%d", &a);
    printf("Number reversed: %d%d%d",a%10,(a/10)%10,a/100);
    return 0;
}
