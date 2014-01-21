#include <stdio.h>
#include <stdlib.h>

int main () {
    int c,q,d,n,p;
    printf("Enter money (in cents)"); 
    scanf("%d", &c);
    q = c/25;
    d = (c-25*q)/10;
    n = (c-25*q-d*10)/5;
    p = c-25*q-d*10-5*n;
    printf("\n %d quarter(s), %d dime(s), %d nickel(s), %d penny(ies)", q,d,n,p);
    return 0;
}
