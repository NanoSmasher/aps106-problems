#include <stdio.h>
#include <string.h>

void getText(char[]);
void printMorseCode(char a[], char b[][5]);

void main(){
    char m[26][5] = {   {".-"},     {"-..."},   {"-.-."},   {"-.."},    {"."},      {"..-."},
                        {"--."},    {"...."},   {".."},     {".---"},   {"-.-"},
                        {".-.."},   {"--"},     {"-."},     {"---"},    {".--."},   {"--.-"},
                        {".-."},    {"..."},    {"-"},      {"..-"},    {"...-"},
                        {".--"},    {"-..-"},   {"-.--"},   {"--.."}                            };
    char a[80];
    getText(a);
    printMorseCode(a,m);
    return;
}

void getText(char a[]){
    scanf("%[^!]", a);
    int i; for (i = 0; i<strlen(a);i++) a[i] = toupper(a[i]);
    return;
}

void printMorseCode(char a[], char b[][5]){
    int i; for (i = 0; i<strlen(a);i++){
        if (a[i] == ' ') printf("\n");
        else printf("%s ", b[a[i]-'A']);
    }
    return;
}
