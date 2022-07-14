/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Dato un vettore di dimensione N in ingresso, trovare il minimo, il massimo, la media dei valori, il numero dei valori pari e dei dispari
Given in input an array of dimension N, find the minimum, the maximum, the average of the values, the number of even and odd values
*/
#include<stdio.h>

int main()
{
    int dim, min, max, somma, pari=0, dispari=0;
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &dim);

    int vettore[dim];
    for(int i=0; i<dim; i++)
    {
        printf("Inserisci il numero nel vettore in posizione %d: ", i+1);
        scanf("%d", &vettore[i]);
    }

    min=vettore[0];
    max=vettore[0];
    for(int i=0; i<dim; i++)
    {
        if(min>vettore[i])
            min=vettore[i];
        if(max<vettore[i])
            max=vettore[i];
        somma=somma+vettore[i];
        if(vettore[i]%2==0)
            pari++;
        else
            dispari++;
    }

    printf("\nIl valore minimo inserito nel vettore vale: %d\n", min);
    printf("Il valore massimo inserito nel vettore vale: %d\n", max);
    printf("La somma dei valori inseriti vale: %d\n", somma);
    printf("La media aritmetica dei valori inseriti vale: %f\n", (float)somma/dim);
    printf("I numeri pari inseriti sono %d, invece, i dispari sono %d\n", pari, dispari);

    return 0;
}
