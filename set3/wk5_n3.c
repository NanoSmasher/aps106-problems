#include <stdio.h>
#include <ctype.h>

int main(){
    /*
    Write an “octal to binary” converter. Write a program that asks a user for a 1-3 digit octal number (an octal number from 0 to 777).
    Check whether each digit is valid (0 to 7); if you find a digit that isn’t, ask again.
    Once you have a valid octal number, convert it to a binary number. For example:

    Enter an octal number (0 – 777): 186
    Enter an octal number (0 – 777): 263
    Octal 263 equals binary 010110011
    */
    int input;
    int flag=0,o1,o2,o3,b1,b2,b3;

    do {
        printf("Enter an octal number (0 - 777): ");
        scanf("%d",&input);
        if (input<0 || input > 777) continue;
        o1 = input/100;
        o2 = (input%100) / 10;
        o3 = input%10;
        if (o1<8 && o2<8 && o3<8) flag=1;
    } while(!flag);

    switch (o1){
        case (1): b1 =   1; break;
        case (2): b1 =  10; break;
        case (3): b1 =  11; break;
        case (4): b1 = 100; break;
        case (5): b1 = 101; break;
        case (6): b1 = 110; break;
        case (7): b1 = 111; break;
    }

                                /*Repetiion of the first switch case, just a vriable change*/
    switch(o2){case(1):b2=1;break;case(2):b2=10;break;case(3):b2=11;break;case(4):b2=100;break;case(5):b2=101;break;case(6):b2=110;break;case(7):b2=111;break;}
    switch(o3){case(1):b3=1;break;case(2):b3=10;break;case(3):b3=11;break;case(4):b3=100;break;case(5):b3=101;break;case(6):b3=110;break;case(7):b3=111;break;}
                                   /* Functions can help us with redundant code like
                                      this one, but we do not cover them in Week 5*/

    printf("Octal %d%d%d equals binary %03d%03d%03d",o1,o2,o3,b1,b2,b3);

    return 0;
}
