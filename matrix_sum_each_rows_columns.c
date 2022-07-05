/*
DAVIDE GIANNUBILO - Esercizi Linguaggio C
Scrivere un programma in C che, presa in input una matrice di dimensione scelta dall'utente, calcoli la somma dei valori di ogni riga e di ogni colonna
Write a program in C that, taken in input an array of size chosen by the user, calculates the sum of the values of each row and each column
*/

#include<stdio.h>

int main()
{
    int righe, colonne, somma;

    do
    {
        printf("Inserisci il numero di righe: ");
        scanf("%d", &righe);
        printf("Inserisci il numero di colonne: ");
        scanf("%d", &colonne);
    }while(righe<=0 || colonne<=0);

    int matrice[righe][colonne];

    printf("\nInserisci i valori nella matrice\n\n");
    for(int i=0; i<righe; i++)
    {
        for(int j=0; j<colonne; j++)
        {
            printf("Inserisci i valori nella riga %d colonna %d: ", i+1, j+1);
            scanf("%d", &matrice[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<righe; i++)
    {
        printf("\n");
        for(int j=0; j<colonne; j++)
        {
            printf("%d\t", matrice[i][j]);
        }
    }
    printf("\n\n");

    for(int i=0; i<righe; i++)
    {
        somma=0;
        for(int j=0; j<colonne; j++)
        {
            somma=somma+matrice[i][j];
        }
        printf("La somma della riga %d vale: %d\n", i+1, somma);
    }
    printf("\n");

    for(int j=0; j<colonne; j++)
    {
        somma=0;
        for(int i=0; i<righe; i++)
        {
            somma=somma+matrice[i][j];
        }
        printf("La somma della colonna %d vale: %d\n", j+1, somma);
    }

    return 0;
}
