#include <stdio.h>
#include <ctype.h>

int main(){
    /*
    Write a program that asks a user to enter a sentence (letters, numbers, white space, punctuation, …),
    and that then counts the total number of characters, as well as the number of letters and numbers. For example:

    Enter a sentence: 1 potato, 2 potato, 3 potato, 4
    31 characters including 18 letters and 4 numbers

    You’ll need to repeatedly use the getchar() function until you read a newline character (‘\n’).
    You can determine whether a character is a letter with the function isalpha(), and a number with the function isdigit().
    Both of these require that you #include <ctype.h>.
    You send these functions a char, and they return a 0 or 1, depending on whether the argument has a particular property.
    For example:

    char c = ‘A’;
    if (isalpha(c))
        printf (“is a letter”);
    else
        printf (“is not a letter”);

    will yield:
    is a letter
    */
    char input;
    int count=0, alpha=0, num=0;

    printf("Enter a word: ");
    while ((input = getchar()) != '\n') {
            count++;
            if (isalpha(input)) alpha++;
            if (isdigit(input)) num++;
    }

    printf("\n%d characters including %d letters and %d numbers",count,alpha,num);

    return 0;
}
