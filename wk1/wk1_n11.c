#include <stdio.h>
#include <stdlib.h>

int main () {
    float pi = 3.14159265359;
    float a;
    printf("Enter an angle: ");
    scanf("%f", &a);
    printf("sin(%.2f) = %.6f\n",a,sin(a*pi/180.0));
    printf("cos(%.2f) = %.6f\n",a,cos(a*pi/180.0));
    printf("tan(%.2f) = %.6f\n",a,tan(a*pi/180.0));
    return 0;
}
