#include <stdio.h>
#include <stdlib.h>

int main () {
    /*Write a program that takes the role of a store clerk.  Ask a user to enter two floating point
    numbers:  the cost of an item, and the amount of money remitted to pay for the item.  Then respond
    appropriately:  calculate the change due to the customer, or ask the customer for more money.  For
    example:

    Cost of the item:  3.56
    Amount tendered:  5.00
    Change:  1.44

    or

    Cost of the item:  3.56
    Amount tendered:  3.00
    Still due: 0.56
    */

    float cost, payment;
    printf("Cost of the item: ");
    scanf("%f", &cost);
    printf("Amount tendered:  ");
    scanf("%f", &payment);
    cost > payment ? printf("Still due: %.2f",cost-payment) : printf("Change: %.2f",payment-cost);
    return 0;
}
