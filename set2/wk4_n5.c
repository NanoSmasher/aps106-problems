#include <stdio.h>
#include <stdlib.h>

int main () {
    /* We turn our attention to loops, and we begin with a couple of questions that are relatively
    straightforward.
    Write a program that calculates the sum of odd numbers from 1 to N:

    1 + 3 + 5 + 7 + 9 + ... + N

    where N is provided by the user.  Make sure to check that the user enters an N that is odd and
    greater than zero.
    */

    int n = 0, i = 0, sum = 1;
    printf("Enter integer value for N: ");
    scanf("%d",&n);
    if (n > 10000) printf("ERROR: Value too large");
    else if (n < 0)printf("ERROR: negative value");
    else if (!n%2) printf("ERROR: Not an odd number");
    else{
        printf("1");
        for (i = 3; i <= n; i+=2){
            printf(" + %d", i);
            sum += i;
        }
        printf("\n=%d", sum);
    }
    return 0;
}
