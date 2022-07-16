/*DAVIDE GIANUUBILO - Esercizi Linguaggio C
Calcolare il quoziente tra due numeri inseriti in ingresso usando sottrazioni successive
Calculate the quotient between two input numbers using successive subtractions
*/

#include<stdio.h>

int main()
{
    int numero, div, risultato, cont=0;
    printf("Inserisci il numero da dividere: ");
    scanf("%d", &numero);
    printf("Inserisci il numero con cui dividere: ");
    scanf("%d", &div);

    risultato=numero;

    while(risultato>0)
    {
        risultato=risultato-div;
        cont++;
        if(risultato>=div)
            continue;
        else
            break;
    }
    printf("\nIl quoziente e': %d\n", cont);
    printf("Il resto e': %d\n", risultato);

    return 0;
}
