/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Scrivere un programma che calcoli la serie armonica di un numero N inserito in ingresso
Write a program that calculates the Harmonic series of a number N given in input
*/

#include<stdio.h>

int main()
{
    int num;
    printf("Inserisci il numero n: ");
    scanf("%d", &num);

    if(num<=0)
    {
        printf("Errore! Numero <= 0\n");
        return 0;
    }
    else
    {
        float somma;
        for(float i=1; i<=num; i++)
        {
            somma=somma+1/i;
        }
        printf("La serie armonica vale: %f\n", somma);
    }

    return 0;
}
