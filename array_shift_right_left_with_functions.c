/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Scrivere un programma che, preso in input un vettore di n elementi scelti dall'utente, stampi lo stesso vettore ma shiftato di 1 posizione verso destra o verso sinistra mediante l'uso di uno switch e l'ultizzo delle funzioni
Write a program that, taken as input a vector of n elements chosen by the user, prints the same vector but shifted of 1 position to the right or left by the use of a switch and of the functions
*/

#include<stdio.h>

//Functions prototypes
int sceglidimensione();
void inseriscivettore(int, int []);
void shiftright(int, int []);
void shiftleft(int, int []);
void stampa(int, int []);

int main()
{
    int dim, scelta=1; 
    dim=sceglidimensione();

    int vett[dim];
    inseriscivettore(dim, vett);

    printf("\nVuoi shiftare a destra o a sinistra?\n");
    printf("Premi '1' destra oppure '2' per sinistra: ");
    do
    {
        if(scelta != 1)
        {
            printf("\nErrore, hai inserito un numero diverso da quelli suggeriti!\n");
            printf("Reinserisci la scelta: ");
        }
        scanf("%d", &scelta);
    }while(scelta<1 || scelta>2);

    switch(scelta)
    {
        case 1:
            shiftright(dim, vett);
            stampa(dim, vett);
            break;

        case 2:
            shiftleft(dim, vett);
            stampa(dim, vett);
            break;

        default:
            printf("\nInvalid choice!\n");
            break;
    } //close switch

    return 0;
}

int sceglidimensione()
{
    int dim;
    do
    {
        printf("Inserisci la dimensione del vettore: ");
        scanf("%d", &dim);
    }while(dim<=0);
    return dim;
}
void inseriscivettore(int dim, int vett[])
{
    for(int i=0; i<dim; i++)
    {
        printf("Inserisci i valori nel vettore: ");
        scanf("%d", &vett[i]);
    }
}
void shiftright(int dim, int vett[])
{
    int temp;
    temp=vett[dim-1];
    for(int i=dim-1; i>0; i--)
    {
        vett[i]=vett[i-1];
    }
    vett[0]=temp;
}
void shiftleft(int dim, int vett[])
{
    int temp;
    temp=vett[0];
    for(int i=0; i<dim-1; i++)
    {
        vett[i]=vett[i+1];
        //printf("%d\t", vett[i]);
    }
    //printf("%d\t", vett[dim-1]);
    vett[dim-1]=temp;
}
void stampa(int dim, int vett[])
{
    printf("\nVettore shiftato: ");
    for(int i=0; i<dim; i++)
    {
        printf("%d\t", vett[i]);
    }
    printf("\n");
}
