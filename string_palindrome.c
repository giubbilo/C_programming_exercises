/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Scrivere un programma che controlli se la parola inserita sia palindroma
Write a program that checks if the entered word is palindrome
*/


#include<stdio.h>
#include<string.h>

#define MAX_LENGTH 100

int main()
{
    int uguali = 0, len;
    char string[MAX_LENGTH];

    printf("Inserisci la parola: ");
    scanf("%s", string);

    len = strlen(string);

    for(int i=0; i<len; i++)
    {
        if(string[i] != string[len-i-1])
        {
            uguali = 1;
            printf("\nLa parola '%s' non e' palindroma!\n", string);
            return 0;
        }
    }

    if(uguali == 0)
    printf("\nLa parola '%s' e' palindroma!\n", string);

    return 0;
}
