#include <stdio.h>
#include <stdlib.h>

#define FILENAME "onetwo.txt"

int main(){
    /*
    Open the file onetwo.txt with a simple text editor (e.g. Notepad on Windows, or TextEdit on a Mac),
    and you’ll discover a sentence, but with each word on a separate line; something like:

    One,
    two,
    buckle
    my
    shoe.

    It’s important to realize that although you can’t see them, the file contains newline characters at the end of each line.
    Write a program that reads the input file one character at a time, and writes the words to the screen, all on one line; for example:

    One, two, buckle my shoe.
    */

    FILE *fp = fopen(FILENAME, "r");
    char read;

    if (fp == NULL) {
            printf("ERROR: Could not open file.");
            exit(EXIT_FAILURE);
    } else {
        do {
            read = getc(fp);
            if (read == '\n') putchar(' ');
            else putchar(read);
        } while(read != EOF);
    }

    fclose(fp);

    return 0;
}
