#include <stdio.h>

int main(){
    /*
     Write a program that asks a user to enter a word in which one letter appears more often than any other.
     Then output which letter that is. How? Allocate an integer array of 26 elements,
     and initialize them all to 0. Then write a loop to use getchar() to read each letter of the word.
     For each letter, increment the counter in the array that corresponds to that letter. For example,
     M is the 13th letter in the alphabet, and so you would increment count[12],
     which is the 13th element in the array. Finally, once you've read each letter,
     search through the array for the highest value, remember the index where that highest value was stored,
     and convert that index to the corresponding letter.

     For example:

     Enter a word: Bubble
     The letter b/B appears most often.
     */

    char alpha[26] = {}, max=0, index=0, let, i;

    printf("Enter a word: ");
    while ((let = getchar()) != '\n') if (isalpha(let)) alpha[tolower(let) - 'a']++;

    for (i = 0; i<26;i++) {
        if (alpha[i] > max) {
            max = alpha[i];
            index = i;
        }
    }

    printf("The letter %c/%c appears most often.", index+'a',index+'A');

    return 0;
}
