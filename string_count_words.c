/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Scrivere un programma che conti quante parole ci sono in una frase
Write a program that counts how many words there are in a sentence
*/

#include<stdio.h>
#include<string.h>

#define MAX_STRING 100

int main()
{
    char stringa[MAX_STRING];
    int conta_parole=0; //Counter

    do
    {
        printf("Inserisci una frase: ");
        gets(stringa);
    }while(strlen(stringa)>100 || strlen(stringa)<=0);

    conta_parole++; //If we are here, we have for sure one word
    for(int i=0; i<strlen(stringa); i++)
    {
        if(stringa[i]== ' ')
        {
            conta_parole++;
        }
    }

    printf("\nNella frase ci sono %d parole\n", conta_parole);

    return 0;
}
