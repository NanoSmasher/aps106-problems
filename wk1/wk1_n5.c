#include <stdio.h>
#include <stdlib.h>

int main () {
    float d,e,f;
    printf("How far (km): ");
    scanf("%f", &d);
    printf("Fuel efficiency (litres/100 km)?: ");
    scanf("%f", &e);
    printf("Cost of gas (cents/litre)?: "); 
    scanf("%f", &f);printf("\nCost of trip is: $%.2f", d*e*f/10000.0);
    return 0;
}
