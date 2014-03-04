#include <stdio.h>
#include <math.h>

#define ERR 0.000001
#define MAXITER 10000

float f(float);
float fprime(float);

int main(){
    /*
    a. Rearrange the equation into the form f(x) =0.
    b. Find the derivative, f'(x) of the non-linear function, f(x).
    c. Write two C-functions that output the value of the function and the value of its derivative
    for any given value of x.
    d. Write the calling program (main) that implements Newton-Raphson method to find the
    zero of the non-linear equation in the specified range. Analyze the problem to find a good
    initial guess.
    e. Compute the value of x at equilibrium correct to five decimal places, and print it (to the
    console) with the required number of iterations. In other words, the difference between
    the solution XF and the value of x found on the iteration prior to the last one should not
    be greater than 0.000001.



    x^3 + 3.993 x 10 ^ -4 = 0.165x^2



    a) f(x) = x^3 - 0.165x^2 + 0.0003993
    b) f'(x) 3x^2 - 0.33x^
    */

    int iter = 0;
    float xnew, xold;

    printf("\nDOWN THE TOILET COMPANY");
    printf("\nNewton-Raphson to find zero of f(x) = x^3 - 0.165x^2 + 0.0003993");

    /*float min, max;
    do{
        printf("\nPlease enter range(min max):");
        scanf("%f %f", &min, &max);
    }while(min>max);*/

    printf("\nPlease enter initial value:");
    scanf("%f", &xnew);

    do{
        xold = xnew;
        if (fprime(xold) == 0 ) return -1;
        xnew = xold - f(xold)/fprime(xold);
    } while ((fabs(xnew-xold) > ERR) && (++iter < MAXITER) );

    if (iter > MAXITER) return -1;
    printf("\nThe zero found is: %.5f", xnew);

    return 0;
}

// part c
float f(float x){return x*x*x - 0.165*x*x + 0.0003993;}
float fprime(float x){ return 3*x*x - 0.33*x;}
