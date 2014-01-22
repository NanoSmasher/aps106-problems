#include <stdio.h>
#include <math.h>

int main(){
    /*The following series is an approximation to sin(x):

    sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...

    Ask a user for a number of terms and for a value of x (specified in degrees),
    and then calculate the approximate value of sin(x),
    and indicate how much this differs from the “exact” value that you calculate with the sin function in math.h.
    For example:

    how many terms? 5
    value of x? 45.
    approximate value of sin(45.000000) is 0.707107
    this is 1.750320e-009 greater than the exact value
    */

    int n=0;
    float x=0, sine=0, delta=0;
    int done=0;
    printf("how many terms? ");
    scanf("%d",&n);
    printf("value of x? ");
    scanf("%f",&x);
    x*=(3.1415926535/180.0);
    int cnt = 1;
    int i = 0;
    for (i = 1; i < (n+1); i++){
        ///////////////////////////////////////////////////////////////////////////////
        //Factorial module.
        //it SHOULD be written as a seperate function BUT we haven't went that far yet.
        int fac=1, j; for (j=cnt; j>0;j--) fac*=j;
        ///////////////////////////////////////////////////////////////////////////////
        float term = pow(x,cnt)/(float)(fac);
        (i%2) ? (sine += term) : (sine -= term);
        cnt+=2;
    }
    printf("approximate value of sin(%.6f) is %.6f\n", x, sine);
    delta = sin(x) - sine;
    delta > 0 ? printf("this is %e greater than the exact value", delta) : printf("this is %e less than the exact value", abs(delta));
    return 0;
}
