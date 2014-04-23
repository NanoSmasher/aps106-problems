#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 4

int score=0;

void view(int[][N]);
void add(int[][N]);
int move(int[][N], char);
void reset(int[][N]);
int check(int[][N]);
void play(int[][N]);

void main(){
    int a[N][N] = {};

    play(a);

    return;
}

void view(int a[][N]){
    printf("score: %9d\n\n",score);

    int i,j;
    for(i=0;i<N;i++){
        for (j=0;j<N;j++){
            printf("%5d",pow(2,a[i][j]));
        }
        printf("\n\n");
    }
}

void fill(int a[][N], int x){
    int i,j, zero=0;
    int t=rand()%2+1;

    for(i=0;i<N;i++)
        for (j=0;j<N;j++)
            if (!a[i][j]){
                zero++;
                if (zero==x+1){
                    a[i][j] = t;
                    return;
                }
            }
}

void add(int a[][N]){
    int i,j, zero=0;

    for(i=0;i<N;i++)
        for (j=0;j<N;j++)
            if (!a[i][j]) zero++;

    if (!zero) return;

    int x = rand()%zero;
    fill(a,x);
}

int move(int a[][N], char c){
    int i,j , q,r, flag=0, repeat=0, shift=0;

    switch (toupper(c)){
    case 'W':
        for(j=0;j<N;j++){
            for(i=0;i<N-1;i++){
                if (a[i][j] == a[i+1][j] && a[i][j]){       ///There is some logic wrong here
                    shift = 1;
                    a[i][j]++;
                    score+=pow(2,a[i][j]);

                    for(q=i+1;q<N-1;q++){
                        a[q][j] == a[q+1][j];
                    }
                    a[N-1][j]=0;
                    flag=1;
                }
                if (!a[i][j]){
                    r=0;
                    for(q=i;q<N;q++) if (a[q][j]) r++;
                    if (r){
                        shift = 1;
                        repeat = 1;
                        do{
                            for(q=i;q<N-1;q++){
                                a[q][j] = a[q+1][j];
                            }
                            a[N-1][j]=0;
                            if(a[i][j]) repeat=0;
                        } while(repeat);
                    }
                }
                if (flag) {i--; flag=0;}

            }
        }
        break;

    case 'A':
        for(i=0;i<N;i++){
            for(j=0;j<N-1;j++){
                if (a[i][j] == a[i][j+1] && a[i][j]){               ///There is some logic wrong here
                    shift = 1;
                    a[i][j]++;
                    score+=pow(2,a[i][j]);

                    for(q=j+1;q<N-1;q++){
                        a[i][q] == a[i][q+1];
                    }
                    a[i][N-1]=0;
                    flag=1;
                }
                if (!a[i][j]){
                    r=0;
                    for(q=j;q<N;q++) if (a[i][q]) r++;
                    if (r){
                        shift = 1;
                        repeat = 1;
                        do{
                            for(q=j;q<N-1;q++){
                                a[i][q] = a[i][q+1];
                            }
                            a[i][N-1]=0;
                            if(a[i][j]) repeat=0;
                        } while(repeat);
                    }
                }
                if (flag) {i--; flag=0;}

            }
        }
        break;

    case 'S':
        for(j=0;j<N;j++){
            for(i=N-1;i>0;i--){
                if (a[i][j] == a[i-1][j] && a[i][j]){               ///There is some logic wrong here
                    shift = 1;
                    a[i][j]++;
                    score+=pow(2,a[i][j]);

                    for(q=i-1;q>0;q--){
                        a[q][j] == a[q-1][j];
                    }
                    a[0][j]=0;
                    flag=1;
                }
                if (!a[i][j]){
                    r=0;
                    for(q=i;q>=0;q--) if (a[q][j]) r++;
                    if (r){
                        shift = 1;
                        repeat = 1;
                        do{
                            for(q=i;q>0;q--){
                                a[q][j] = a[q-1][j];
                            }
                            a[0][j]=0;
                            if(a[i][j]) repeat=0;
                        } while(repeat);
                    }
                }
                if (flag) {i--; flag=0;}
            }
        }
        break;

    case 'D':
        for(i=0;i<N;i++){
            for(j=N-1;j>0;j--){
                if (a[i][j] == a[i][j-1] && a[i][j]){               ///There is some logic wrong here
                    shift = 1;
                    a[i][j]++;
                    score+=pow(2,a[i][j]);

                    for(q=j-1;q>0;q--){
                        a[i][q] == a[i][q-1];
                    }
                    a[i][0]=0;
                    flag=1;
                }
                if (!a[i][j]){
                    r=0;
                    for(q=j;q>=0;q--) if (a[i][q]) r++;
                    if (r){
                        shift = 1;
                        repeat = 1;
                        do{
                            for(q=j;q>0;q--){
                                a[i][q] = a[i][q-1];
                            }
                            a[i][0]=0;
                            if(a[i][j]) repeat=0;
                        } while(repeat);
                    }
                }
                if (flag) {i--; flag=0;}
            }
        }
        break;

    }

    return shift;
}

void reset(int a[][N]){
    int i,j;
    for(i=0;i<N;i++) for (j=0;j<N;j++) a[i][j] = 0;
    add(a);
    add(a);
}

int loop(int a[][N]){
    int i, j, flag=0;
    for(i=0;i<N;i++){
        for (j=0;j<N;j++){
            if(i>0)
                if(a[i][j] == a[i-1][j]) flag = -1;
                if(j>0 && a[i][j] == a[i-1][j-1]) flag = -1;
                if(j<N && a[i][j] == a[i-1][j+1]) flag = -1;
            if(i<N)
                if(a[i][j] == a[i+1][j]) flag = -1;
                if(j>0 && a[i][j] == a[i+1][j-1]) flag = -1;
                if(j<N && a[i][j] == a[i+1][j+1]) flag = -1;
            if(j>0 && a[i][j] == a[i][j-1]) flag = -1;
            if(j<N && a[i][j] == a[i][j+1]) flag = -1;
        }
    }
    return flag;
}

int check(int a[][N]){
    int i, j, flag=0;
    for(i=0;i<N;i++){
        for (j=0;j<N;j++){
            if (a[i][j] == 11) return 1;
            if (!a[i][j]) flag=1;
        }
    }
    if (flag) return -1;
    else return loop(a);
}

void play(int a[][N]){
    char c;
    int stat=-1;
    reset(a);
    int bad=1;
    int x=1;

    while(stat == -1){
        system("cls");          ///Change for Mac
        view(a);

        int stat = check(a);
        if (!stat) {printf("you lose!"); break;}
        else if (stat == 1) {printf("you win!"); break;}

        if (!bad && x) add(a);
        else bad=0;
        printf("Type one of 'WASD' to push the board in that direction\n");
        printf("Type 'R' to reset the game or type 'Q' to ragequit\n\n\n   input:");
        scanf("%c",&c);
        if(toupper(c) == 'W' || toupper(c) == 'A' || toupper(c) == 'S' || toupper(c) == 'D') x=move(a,toupper(c));
        else if(toupper(c) == 'Q') return;
        else if(toupper(c) == 'R') {reset(a); bad=1;}
        else bad=1;
    }
}

