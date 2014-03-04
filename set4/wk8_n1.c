#include <stdlib.h>
#include <time.h>

int main(){
    /*
    Write a program in just main ( ), that allocates an array of 10 integers and fills the integers with
    random numbers between 1 and 100. How to do that?

    You can generate a random integer between 1 and 100 with the following lines of code:

    #include <stdlib.h>
    #include <time.h>

    ...

    int number;

    srand ((unsigned) time(NULL)); // call this function once; it “seeds” the RNG

    // now you can call rand ( ) as often as you like; each time it will generate a random int
    // between 0 and RAND_MAX, some big number; to generate random numbers within
    // a range, use the % operator

    number = rand ( )%100+1; // the % operator yields 0 -­- 99; adding 1 yields 1 -­- 100

    Then calculate the average, minimum, and maximum values in the array.

    */
    int number, n[10], min, max;
    float sum;

    srand((unsigned)time(NULL));

    int i;
    for (i = 0; i < 10; i++){
        number = rand()%100+1;
        if (!i) min = max = number;
        sum+= n[i] = number;
    }

    for (i = 0; i < 10; i++){
        if (n[i]>max) max = n[i];
        if (n[i]<min) min = n[i];
    }

    printf("average: %.2f\n", sum/10.);
    printf("maximum: %d\n", max);
    printf("minimum: %d", min);

    return 0;
}
