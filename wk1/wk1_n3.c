#include <stdio.h>
#include <stdlib.h>

int main () {
  float u,n;
  printf("Cost? ");
  scanf("%f", &u);
  printf("How many? ");
  scanf("%f", &n);
  printf("Total cost is $%.2f", u*n);
  return 0;
}
