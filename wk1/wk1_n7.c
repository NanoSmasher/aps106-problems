#include <stdio.h>
#include <stdlib.h>

int main () {
    float x;
    printf("Enter x: ");
    scanf("%f", &x);
    printf("The value of y = 4x + 3 is %.2f", 4*x+3); 
    return 0;
}
