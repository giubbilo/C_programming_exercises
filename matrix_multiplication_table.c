/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Scrivere un programma che stampi la tabellina di un numero N all'interno di una matrice di dimensione scelta dall'utente
Write a program that prints the multiplication table of a number N (given in input) within a matrix of size chosen by the user
*/

#include<stdio.h>

int main()
{
    int row, column, num, cont=0;
    do
    {
        printf("inserisci il numero di righe: ");
        scanf("%d",&row);
        printf("inserisci il numero di colonne: ");
        scanf("%d",&column);
    }while(row<=0 || column<=0); //Rows & Columns must be positive and greater than zero
    do
    {
        printf("Inserisci il numero di cui vuoi calcolare le moltiplicazioni successive: ");
        scanf("%d", &num);
    }while(num!=0); //It cannot be zero
    
    int matrix[row][column];

    printf("\nLa matrice sara': \n\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            matrix[i][j]=num*cont;
            printf("%3d\t", matrix[i][j]);
            cont++;
        }
        printf("\n");
    }

    return 0;
}
