#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FILENAME "shapes.txt"
#define FILELESS "lessthanorequalto4000.txt"
#define FILEMORE "greaterthan4000.txt"

void tofile(int id, double length, FILE *less, FILE *more){
    if (length > 4000) fprintf(more,"Path Id: %d\t\t Total Distance: %.4f\n", id, length);
    else fprintf(less, "Path Id: %d\t\t Total Distance: %.4f\n", id, length);
    return;
}

int main(){

    int id_curr=0, id_prev=0, routes=1;
    double part=0, length=0, total=0, square=0; //4-digit accuracy does not carry over for floats
    FILE *fp = fopen(FILENAME, "r");
    FILE *l4 = fopen(FILELESS, "w");
    FILE *g4 = fopen(FILEMORE, "w");

    if (fp == NULL || l4 == NULL || g4 == NULL) return -1;

    while (getc(fp) != '\n') continue;      //Skip first line

    if(fscanf(fp, "%d,%*f,%*f,%*f,%lf", &id_curr, &part) == EOF) return -2;
    id_prev = id_curr;                      //initilize ID for first route

    do{
        if (id_prev!=id_curr){              //new route stuff
            total += length;
            square += length*length;        //Series for standard deviation
            tofile(id_prev,length,l4,g4);   //view function above
            id_prev = id_curr;
            routes++;
            length = 0;
        }
        length+=part;                       //regardless of what happens, keep adding
    } while(fscanf(fp, "%d,%*f,%*f,%*f,%lf", &id_curr, &part) != EOF);

    /*Clean up the leftover length*/
    total += length;
    tofile(id_prev,length,l4,g4);

    //printf("%lf\n",total);    //Test to prove correct distance
    printf("\"shapes.txt\" has been parsed.\n");
    printf("\"lessthanorequalto4000.txt\" and \"greaterthan4000.txt\" have been updtaed.\n");
    printf("Average distance: %.4lfm\n", total/routes);
    printf("Standard deviation: %.4lfm\n", sqrt ( (square/routes)-total*total/(routes*routes) ) );    //sqrt [ TotalSquareSum/NumRoutes - average squared ]

    return 0;
}
