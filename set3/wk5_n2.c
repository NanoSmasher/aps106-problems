#include <stdio.h>
#include <ctype.h>

int main(){
    /*
    Write a “binary to decimal” converter. Write a program that asks a user for a four digit binary number.
    Check whether each digit is valid (0 or 1); if you find a digit that isn’t, ask again for a four digit number.
    If all four digits are valid, then calculate the decimal equivalent and write it to the screen. For example:

    Enter a four-digit binary number: 1301
    Enter a four-digit binary number: 1101
    Binary 1101 equals decimal 13
    */
    char input;
    int count,flag=0,d1=0,d2=0,d3=0,d4=0;

    do {
        count = 0;
        printf("Enter a four-digit binary number: ");

        while ((input = getchar()) != '\n'){
            count++;
            if ((input == '0' || input == '1') && count <5){
                switch (count){
                    case(1): d1 = input-48; break;
                    case(2): d2 = input-48; break;
                    case(3): d3 = input-48; break;
                    case(4): d4 = input-48; break;
                }
            } else break;
        }

        if (count == 4) flag = 1;              /* Get out of the loop when user enters exactly four digits containing 0's or 1's*/
        if (input == '\n') continue;           /* Go to top when user enters fewer than 4 digits, or hits enter without an input*/
        while ((input = getchar()) != '\n');   /* Empty loop going through the remaining character if the user enter more than 4*/

    } while(!flag);

    printf("Binary %d%d%d%d equals decimal %d",d1,d2,d3,d4, 8*d1+4*d2+2*d3+d4);

    return 0;
}
