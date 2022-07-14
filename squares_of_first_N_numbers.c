/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Dato un numero N in input, stampare il quadrato dei primi N numeri
Given in input a number N, print the squares of the first N numbers
*/

#include<stdio.h>

int main()
{
    int n;
    do
    {
       printf("Inserisci il numero N: ");
       scanf("%d", &n);
    }while(n<=0);
    for(int i=1; i<=n; i++)
    {
       printf("%d\n", i*i);
    }
    
    printf("\n");
    return 0;
}
