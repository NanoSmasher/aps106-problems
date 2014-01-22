#include <stdio.h>

int main(){
    /*Imagine that you’d like to calculate the total play length of a music CD,
    the sum of the play lengths of each of the songs.
    Write a program that repeatedly asks a user to input the play length of a song, in the form min:sec (e.g. 4:37).
    The appropriate format specifier is “%d:%d”. Check that the number of seconds is less than 60.
    To indicate the end of the list, the user would enter a negative value for min.
    Count the number of songs, calculate the total play length, and output the results.
    For example, input/output might look like this:

    Length of song (min:sec) : 4:14
    Length of song (min:sec) : 3:99
    Invalid entry
    Length of song (min:sec) : 3:39
    Length of song (min:sec) : 17:32
    Length of song (min:sec) : 49:13
    Length of song (min:sec) : -1:00

    The total play length of 4 songs is (hh:mm:ss) 1:14:38.
    */

    int min=0, sec=0, num=0, len=0;

    int done=0;
    do{
        printf("Length of song (min:sec) : ");
        scanf("%d:%d", &min, &sec);
        if (min < 0) done = !done;
        else if (sec < 0 || sec > 59) printf("Invalid entry\n");
        else{
            len += min*60 + sec;
            num++;
        }
    } while (!done);

    printf("The total play length of %d songs is(hh:mm:ss) %d:%d:%d.",
           num,
           len/3600,
           (len - 3600*(len/3600))/60,
           len - 3600*(len/3600) - 60*((len - 3600*(len/3600))/60)
    );     //Just to make it more legible
    return 0;
}
