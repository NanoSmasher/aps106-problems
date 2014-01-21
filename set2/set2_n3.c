#include <stdio.h>
#include <stdlib.h>

int main () {
    /* Write a program that converts a time specified as am/pm into a military time (00:00 to 23:59).
    For example:
    Enter a time (hr min):  7 25
    am (1) or pm (2):  1
    Military time:  07:25

    or

    Enter a time (hr min):  12 30
    am (1) or pm (2):  1
    Military time:  00:30

    or

    Enter a time (hr min):  1 30
    am (1) or pm (2):  2
    Military time:  13:30

    To specify that an integer print with a leading zero (e.g. 07), print it as %.2d.
    */

    int hr,min,zone;
    printf("Enter a time (hr min): ");
    scanf("%d %d", &hr, &min);
    printf("am (1) or pm (2): ");\
    scanf("%d", &zone);

    if (zone == 2){
        if (hr < 12) printf("Military time: %.2d:%.2d", hr+12, min);
        else printf("Military time: 12:%.2d", min);
    } else {
        if (hr < 12) printf("Military time: %.2d:%.2d", hr, min);
        else printf("Military time: 00:%.2d", min);
    }
    return 0;
}
