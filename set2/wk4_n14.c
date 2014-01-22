#include <stdio.h>

int main(){
    /*Write a program that repeatedly asks a user for an integer until the user enters a value that is less than the previous value.
    At that point, calculate the average increment in the set of increasing values.
    For example enter a number:

    enter a number: 3
    enter a number: 11
    enter a number: 11
    enter a number: 18
    enter a number: 13
    average increment is 32/4 = 8.00

    Generalize the code to look at the first two numbers entered,
    and decide whether the sequence is increasing or decreasing.
    Continue to accept values until the sequence is disrupted.
    */

    int pre=0,input=0,sum=0, inc=0,pattern=1;
    // pre: stores the previous value
    // input: the current number
    // sum: adds up the average increment
    // inc: incrementor to count
    // pattern: 1 for an increasing sequence, -1 for a decreasing sequence

    printf("enter a number: ");
    scanf("%d",&pre);
    printf("enter a number: ");
    scanf("%d",&input);
    sum+=abs(input-pre);
    inc+=2;
    input > pre ? (pattern = 1) : (pattern = -1);
    pre = input;

    int done=0;
    while(!done){
        printf("enter a number: ");
        scanf("%d",&input);
        if (input >= pre && pattern == 1){
            sum+=input-pre;
            inc++;
            pre = input;
        } else if (input <= pre && pattern == -1) {
            printf("here: ");
            sum+=pre-input;
            inc++;
            pre = input;
        } else done = !done;
    }

    printf("average ");
    pattern == 1 ? printf("increment") : printf("decrement");
    printf(" is %d/%d = %f", sum, inc, (sum)/(double)(inc));
    return 0;
}
