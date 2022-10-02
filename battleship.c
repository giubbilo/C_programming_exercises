/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Scrivere un programma che simuli il gioco "battaglia navale"
Write a program in C that simulates "Battleships" game
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    time_t t;
    int lato, r1, r2, tentativi=3, c1, c2; //You can choose how many tries yuo have

    do
    {   printf("Inserisci la dimensione della griglia: ");
        scanf("%d", &lato);
    }while(lato<=0); //To avoid negative and zero dimension

    int matrice[lato][lato];

    //Populate the matrix with zeroes
    for(int i=1; i<=lato; i++)
    {
        for(int j=1; j<=lato; j++)
        {
            matrice[i][j]=0;
            printf("|_%d_|", matrice[i][j]);
        }
        printf("\n");
    }

    //This is to create random position for our target
    //In this case you just need to hit one position to win
    srand((unsigned) time(&t));
    r1 = (rand()%lato);
    r2 = (rand()%lato);
    printf("\n%d \t %d", r1, r2);

    /*Since the random function can give us a 0,
    the target position is incremented by 1 in the case we get it because, in the game,
    we do not have row/column 0*/
    if(r1 == 0) r1++;
    if(r2 == 0) r2++;

    //The target is marked by a "-1" in the matrix
    matrice[r1][r2]=-1;

    do
    {
        printf("\n\nDove vuoi sparare? ");
        printf("Inserisci le coordinate: ");
        do
        {
            scanf("%d %d", &c1, &c2);
            if(c1 == 0 || c2 == 0)
            {
                printf("Hai inserito un numero negativo o uno zero. Reinserisci le coordinate: ");
            }
        }while(c1<=0 || c2<=0 || c1>lato || c2>lato); //Some checks on the coordinates
        if(c1==r1 && c2==r2) //Check if you got the target
        {
            matrice[c1][c2]=1;
            printf("\n\tColpito e affondato!\n");
            printf("\tHAI VINTO!\n");
            tentativi=0;
        }
        else
        {
            tentativi--;
            matrice[c1][c2]=1;
            printf("\n\tObiettivo mancato!\n");
            if(tentativi==0)
                printf("\tHAI PERSO!\n");
            else
                printf("\tHai ancora %d tentativi", tentativi);
        }
    }while(tentativi>0);

    //Print the final matrix with the target and the tries
    printf("\nL'obiettivo era in posizione %d - %d\n\n", r1, r2);
    for(int i=1; i<=lato; i++)
    {
        for(int j=1; j<=lato; j++)
        {
            printf("|_%d_|", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}
