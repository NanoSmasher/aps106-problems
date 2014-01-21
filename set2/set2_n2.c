#include <stdio.h>
#include <stdlib.h>

int main () {
    /*Another one that’s not too hard.  From the text, write a program that determines the number of
    digits (from one to four) in a positive number:

        Enter a number:  374
        The number 374 has 3 digits

    If the number entered is negative, or has more than four digits, print an appropriate response.
    Otherwise, determine the number of digits, and respond as shown.
    */

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0 || num > 9999) printf("ERROR: Too many digits");
    else if (num > 999) printf("The number %d has 4 digits",num);
    else if (num > 99) printf("The number %d has 3 digits",num);
    else if (num > 9) printf("The number %d has 2 digits",num);
    else printf("The number %d has 1 digit",num);
    return 0;
}
