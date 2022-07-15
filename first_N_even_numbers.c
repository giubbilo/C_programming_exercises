/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Dato un numero N in ingresso, stampare i primi N numeri pari
Given a number N in input, print the first N even numbers
*/

#include<stdio.h>

int main()
{
    int input, num=0;
    printf("Quanti numeri pari vuoi visualizzare?\n");
    do
    {
        printf("Inserisci il valore qui: ");
        scanf("%d", &input);
    }while(input<=0);
    printf("I primi %d numeri pari sono:\n", input);
    for(int contatore=0; contatore<input; num=num+2, contatore++)
    {
        printf("%4d", num);
    }
    printf("\n");
    return 0;
}
