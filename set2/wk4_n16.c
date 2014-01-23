#include <stdio.h>

int main(){
    /*Consider the following sequence of numbers.
    Notice that from the first to the second you add one,
    from the second to third you subtract three.
    That behaviour is then repeated over and over again; for example:

    7, 8, 5, 6, 3, 4, 1, 2, -1, 0

    Write a program that asks a user for the first three integers in a sequence,
    and for a number of terms N. Then print the sequence,
    beginning with the three integers the user entered,
    followed by N-3 other terms that follow the pattern defined by the first three integers
    For example:

    Enter three integers: -4 3 4
    How many terms: 8

    The sequence is -4 3 4 11 12 19 20 27
    */

    int n1=0, n2=0, n3=0, terms=0, seq=0;

    printf("Enter three integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    seq=n3;
    printf("How many terms: ");
    scanf("%d", &terms);
    printf("\nThe sequence is %d %d %d ",n1,n2,n3);

    int i = 0;
    for (i = 1; i<=(terms-3);i++){
        if(i%2){
            seq+=n2-n1;
            printf("%d ",seq);
        }else{
            seq+=n3-n2;
            printf("%d ",seq);
        }
    }

    return 0;
}
