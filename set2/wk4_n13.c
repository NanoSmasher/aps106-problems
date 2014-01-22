#include <stdio.h>

int main(){
    /* Back to the Fibonacci series of numbers:

        0 1 1 2 3 5 8 13 21 34 55 89 ...

    The first Fibonacci number is 0, the second Fibonacci number is 1. After the first two,
    each successive number can be calculated by summing the previous two.

    Write a program that does the following:

    1. asks a user for two positive integers n1 and n2;
    2. checks that n1 and n2 are greater than zero, and that n2 > n1; if the numbers aren’t valid,
       the program should repeatedly ask the user for valid n1 and n2, until they’re entered;
    3. prints the values of the Fibonacci numbers between n1 and n2; for example, if n1 = 7 and n2 = 10, then:

    Fibonacci numbers 7 through 10 are 8 13 21 34.
    */

    int start=0, terms=0, i=0, num1=1, num2=0;

    int done=0;
    do {
        printf("Enter two positive integers n1 and n2: ");
        scanf("%d %d", &start, &terms);
        if (terms > start && start>0 && terms>0) done = !done;
    } while (!done);

    start--;
    if (terms < 0 || terms > 47) printf("ERROR: Out of bounds");
    else {

        for (i = 0; i < terms; i++){
            if (i%2){
                if (i >= start) printf("%d ", num1);
                num2 += num1;
            } else {
                if (i >= start) printf("%d ", num2);
                num1 += num2;
            }

        }

    }

    return 0;
}
