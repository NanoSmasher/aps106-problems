#include <stdlib.h>

double F2C (double tempF);

int main(){
    /*
    Write a function F2C that corresponds to the following declaration:

    double F2C (double tempF);

    The argument tempF is a Fahrenheit temperature; the function returns the equivalent temperature in degrees Celsius,
    according to the following formula: tempC = 5/9 * (tempF-32) Then write a main ( ) function to ask a user for a Fahrenheit temperature,
    use F2C to convert that to Celsius, and output that value to the screen.

    */
    double input;

    printf("Enter a Fahrenheit Temp: ");
    scanf("%lf", &input);
    printf("The corresponding Celcius temperature is: %.0lf degrees", F2C(input));
    return 0;
}

double F2C (double tempF){
    return (1.*5/9)*(tempF-32.0);
}
