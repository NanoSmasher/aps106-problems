#include <stdio.h>

int main(){
    /*
    Something a little more complicated. Write a program that asks a user to enter a word,
    and then decides if the word is in alphabetical order. For example:

    Enter a word: Beer
    The word is in alphabetical order

    or

    Enter a word: SOS
    The word is NOT in alphabetical order

    Note that to compare letters, you’ll need to convert all letters to one case.
    And if the user enters something other than a letter, the program should respond appropriately.
    For example:

    Enter a word: Gr8
    That’s not a word!
    */
    char input, last='A', answer='?';

    printf("Enter a word: ");
    while ((input = getchar() )!= '\n') {
            if (input>='a' && input<='z') {input -= 'a'-'A';}
            if (input>='A' && input<'Z'){
                if (input>=last) {last = input; answer='y';}
                else {answer = 'n'; break;}
            } else {answer = '?'; break;}
    }

    switch(answer){
    case ('y'):
        printf("\nThe word is in alphabetical order");
        break;
    case ('n'):
        printf("\nThe word is NOT in alphabetical order");
        break;
    case ('?'):
        printf("\nThat's not a word!");
        break;
    }


    return 0;
}
