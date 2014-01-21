#include <stdio.h>
#include <stdlib.h>

int main () {
    /* This one’s a bit more complicated.  Write a program to calculate a babysitting charge.  Imagine
    that a babysitter is willing to work anytime between 6:00 pm and 5:59 am.  Ask the babysitter to
    enter a start and an end time, each as two integers (see below).  Do not ask the user to specify am or
    pm.  Check that the times entered are valid:  1 <= hours <= 12, 0 <= mins <= 59.  Check that the start
    time precedes the end time.  Then calculate the babysitting charge at a rate of $4.50 / hour,
    calculated to the minute and then rounded up to the nearest dollar.

    Enter a start time:  7 20
    Enter an end time: 12 45
    The babysitting charge is $25

    There are surely many ways to do this.  But if you’re stuck, try devising a way to convert each of the
    two times into minutes since 6:00 pm, which is relatively easy for times until 12:59 am, and only a
    little more difficult for times beginning at 1:00 am.
    */

    int fromstart, fromend, totaltime; //used to determines minutes from start and end of job to calculate total time

    int starthr,startmin,endhr,endmin;
    printf("Enter a start time: ");
    scanf("%d %d", &starthr, &startmin);
    printf("Enter a end time: ");
    scanf("%d %d", &endhr, &endmin);

    if (starthr < 1 || starthr > 12 || startmin < 0 || startmin > 59 ||endhr < 1 || endhr > 12 || endmin < 0 || endmin > 59){
        printf("ERROR: incorrect time notation");
    } else {

      //minutes from 6:00pm
      if(starthr >= 6 && starthr <= 11) fromstart = starthr*60 + startmin - 6*60;
      else if(starthr == 12) fromstart = startmin + 6*60;
      else fromstart = starthr*60 + startmin + 6*60;
  
      //minutes until 5:59am
      if (endhr >=1 && endhr<=5) endhr+=12;
      fromend = (12*60+5*60+59) - endhr*60 - endmin;
      
      //calculate time difference
      totaltime = (6*60+5*60+59) - fromend - fromstart;
      totaltime < 0 ? printf("ERROR: End time preceeds start time.") : printf("The babysitting charge is: $%.2f", ceil((totaltime/60.0)*4.5));
    }
    return 0;
}
