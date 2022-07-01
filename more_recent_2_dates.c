/*
DAVIDE GIANNUBILO - Esercizi Linguaggio C
Scrivere un programma in C che, prese in input 2 date, determini qual è la piu' recente tra le due
*/
#include<stdio.h>
int main()
{
    int g1, m1, a1, g2, m2, a2, somma1, somma2;
    do
    {
        printf("Inserisci il giorno della prima data: ");
        scanf("%d", &g1);
        printf("Inserisci il mese della prima data: ");
        scanf("%d", &m1);
        printf("Inserisci l'anno della prima data: ");
        scanf("%d", &a1);
    }while(g1<=0 || g1>31 || m1<=0 || m1>12 || a1<=0 || a1>2100);
    do
    {
        printf("Inserisci il giorno della seconda data: ");
        scanf("%d", &g2);
        printf("Inserisci il mese della seconda data: ");
        scanf("%d", &m2);
        printf("Inserisci l'anno della seconda data: ");
        scanf("%d", &a2);
    }while(g2<=0 || g2>31 || m2<=0 || m2>12 || a2<=0 || a2>2100);

    if(a1==a2 && m1==m2 && g1==g2)
    {
        printf("\nEntrambe le date sono uguali!\n");
        printf("\nData 1: %d/%d/%d\n", g1, m1, a1);
        printf("Data 2: %d/%d/%d\n", g2, m2, a2);
        return 0;
    }

    printf("\nData 1: %d/%d/%d\n", g1, m1, a1);
    printf("Data 2: %d/%d/%d\n", g2, m2, a2);

    somma1=(a1*365)+(m1*30)+g1;
    somma2=(a2*365)+(m2*30)+g2;

    if(somma2>somma1)
    {
        printf("\nData 2 più recente!\n");
    }
    else
        printf("\nData 1 più recente!\n");

    return 0;
}
