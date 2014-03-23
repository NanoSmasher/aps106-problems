#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
    There are a number of ways to do this problem,
    but I chose to shuffle a deck rather then
    pick a random card because that is unconvential
    to do in real life.

    I also made the suit and type match with convention
    instead of assigning them to illegible characters.

    Also made functions to increase flexibility and utility.
**/

struct Card
    {
        char suit;
        char type;
    };

void init(struct Card[]);
void shuffle(struct Card[]);
void draw(struct Card[], int);

void main(){
    struct Card deck[52];
    srand((unsigned)time(NULL));
    init(deck);
    shuffle(deck);
    draw(deck, 5);  //Look how pretty the main function looks
    return;
}

/**Initilize all 52 cards of the deck**/
void init(struct Card d[]){
    int i;
    for (i=0;i<52;i++){
        switch (i%4){
            case 0: d[i].suit = 'D'; break; //Diamond
            case 1: d[i].suit = 'C'; break; //Club
            case 2: d[i].suit = 'H'; break; //Heart
            case 3: d[i].suit = 'S'; break; //Spades
        }
            switch (i%13){
            case 10: d[i].type = 'J'; break; //Jack
            case 11: d[i].type = 'Q'; break; //Queen
            case 12: d[i].type = 'K'; break; //King
            default: d[i].type = '0'+i%13; break;
        }
    }
}

/**Fisher-Yates shuffle algorithm - modern implementation**/
void shuffle(struct Card d[]){
    int i,j;
    struct Card tmp;
    for (i=51; i>0;i--) {
       j = rand()%i;
       tmp = d[i];
       d[i] = d[j];
       d[j] = tmp;
    }
    return;
}

/**Draw n cards from the deck**/
void draw(struct Card d[], int n){
    int i;
    printf("The cards you drew were:\n\n");
    for (i=0;i<n;i++){
        switch(d[i].type){
            case '1': printf("Ace");break;
            case '2': printf("Two");break;
            case '3': printf("Three");break;
            case '4': printf("Four");break;
            case '5': printf("Five");break;
            case '6': printf("Six");break;
            case '7': printf("Seven");break;
            case '8': printf("Eight");break;
            case '9': printf("Nine");break;
            case '0': printf("Ten");break;
            case 'J': printf("Jack");break;
            case 'Q': printf("Queen");break;
            case 'K': printf("King");break;
            default: printf("%c", d[i].type);
        }
        printf(" of ");
        switch(d[i].suit){
            case 'D': printf("Diamonds");break;
            case 'C': printf("Clubs");break;
            case 'H': printf("Hearts");break;
            case 'S': printf("Spades");break;
        }
        printf("\n");
    }
}
