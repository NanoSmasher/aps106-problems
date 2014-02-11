#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897932385

int main(){
    /*
    Write a program that does the following:
    1. asks the user for a positive integer value of N and a two positive floating point values of L and x such
    that 0.05L  x  0.95L, in order to avoid the “Gibbs phenomenon”;
    2. checks that the conditions given above are met; if they aren’t, the program should repeatedly ask the
    user for the input values again;
    3. calculates the value of f(x)
    by evaluating the series;


    */
    int N;
    float L, x, answer=0;

    do {
        printf("Enter values for N, L and x: ");
        scanf("%d %f %f", &N,&L,&x);
    }while (N <= 0 || L <=0 || x <= 0 || 0.05*L > x || x > 0.95*L);

    int i;
    for (i = 1; i <= N; i++){
        float s = 2*(i-1) + 1;
        answer += 1/s * sin((s*PI*x)/L);
    }

    answer *= (float)(4/PI);

    printf("%d-term Fourier series evaluates to %.4f at x=%.2f", N, answer, x);

    return 0;
}
