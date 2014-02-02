#include <stdio.h>

int main(){
    /*
    Very simply, ask a user to type whatever they want, then respond by telling them how many keystrokes they used.
    For example:

    Type whatever you want: Here's whatever I want

    You typed 23 keystrokes (including the return/enter key)
    */
    int count = 0;

    printf("Type whatever you want: ");
    while(getchar() != '\n') count++;
    printf("\nYou typed %d keystrokes (including the return/enter key)",++count);

    return 0;
}
