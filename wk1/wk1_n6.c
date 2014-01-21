#include <stdio.h>
#include <stdlib.h>

int main () {
    int a;
    printf("Enter 2 digit num: ");
    scanf("%d", &a);
    printf("Number reversed: %d%d",a%10,a/10);
    return 0;
}
