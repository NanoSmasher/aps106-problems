#include <stdio.h>
#include <stdlib.h>

int main () {
    float n;
    printf("Enter number: ");
    scanf("%f", &n);
    printf("Truncated to one decimal place: %d.%d\n",(int)(n),(int)(n*10-10*((int)(n))));
    printf("Rounded to one decimal place: %.1f", n);
    return 0;
}
