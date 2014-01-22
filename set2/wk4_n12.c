#include <stdio.h>

int main(){
    /* Write a program that prints a one-month calendar.
    The user specifies the number of days in the month and the day of the week on which the month begins:

    Enter number of days in month: 31
    Enter starting day (1=Sun, ..., 7=Sat): 3

    and the code produces the following:

           1  2  3  4  5
     6  7  8  9 10 11 12
    13 14 15 16 17 18 19
    20 21 22 23 24 25 26
    27 28 29 30 31

    This program isn’t as hard as it looks.
    The most important part is a for statement that uses a variable i to count from 1 to n,
    where n is the number of days in the month, printing each value of i. Inside the loop,
    an if statement tests whether i is the last day in a week; if so, it prints a newline character.
    */

    int n=0, day=0;
    printf("Enter number of days in month: ");
    scanf("%d",&n);
    printf("Enter starting day (1=Sun, ..., 7=Sat): ");
    scanf("%d",&day);
    printf("\n");
    int i;
    for (i=1; i<day;i++) printf("   ");
    int j;
    for (j=1; j<=n;j++){
        j < 10 ? printf(" %d ",j): printf("%d ",j);
        day++;
        if (day > 7) {
            day = 1; printf("\n");
        }
    }
    return 0;
}
