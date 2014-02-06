#include <stdio.h>
#include <math.h>

int main(){
    float fahrenheit,celsius,windspeed,windchill;

    printf("Enter the temperature (degrees F): ");
    scanf("%f", &fahrenheit);
    printf("Enter the wind speed (mph): ");
    scanf("%f", &windspeed);

    windchill = 35.74 + 0.6215*fahrenheit - 35.75*pow(windspeed,0.16)
                + 0.4275*fahrenheit*pow(windspeed,0.16);

    celsius = (5.0/9.0)*(windchill-32);
    //convert fahrenheit to celcius

    printf("\nThe wind chill is %4.1f F or %4.1f C", windchill, celsius);

    return 0;
}
