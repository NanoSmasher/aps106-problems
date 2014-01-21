#include <stdio.h>
#include <stdlib.h>

int main () {
    printf ("\n");
    float temp;
    printf("Enter a Celsius temperature: ");
    scanf("%f", &temp);
    printf("Fahrenheit equivalent is: %.0f", temp*1.8+32);
    return 0;
}
