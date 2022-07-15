#include<stdio.h>
int main()
{
    int g, mese, anno, g1,mese2, anno2, somma_tot_nascita, somma_tot_corrente;
    printf("Inserisci la data da controllare: \n");
    do
    {
        printf("Inserisci il giorno: \n");
        scanf("%d", &g);
    }while(g<=1 || g>=31);
    do
    {
        printf("Inserisci il mese: \n");
        scanf("%d", &mese);
    }while(mese<=0 || mese>13);
    do
    {
        printf("Inserisci l'anno: \n");
        scanf("%d",&anno);
    }while(anno<=1920 || anno>=2100);

    printf("La data di nascita che hai inserito e' %d-%d-%d \n", g, mese,anno);

    printf("Inserisci la data odierna \n");

    do
    {
        printf("Inserisci il giorno: \n");
        scanf("%d", &g1);
    }while(g1<=1 || g1>=31);
    do
    {
        printf("Inserisci il mese: \n");
        scanf("%d", &mese2);
    }while(mese2<=1 || mese2>=12);
    do
    {
        printf("Inserisci l'anno: \n");
        scanf("%d",&anno2);
    }while(anno2<=1920 || anno2>=2100);

    printf("La data odierna che hai inserito e' %d-%d-%d \n ", g1, mese2,anno2);

    somma_tot_corrente=(anno2*365)+(mese2*30)+g1;
    somma_tot_nascita=(anno*365)+(mese*30)+g;

    //18 ANNI SONO PIU DI 6570 GG

    if((somma_tot_corrente-somma_tot_nascita)>6570)
            printf("E' maggiorenne \n");
    else
        printf("IL soggetto e' Minorenne \n");

    int totale_anni=(somma_tot_corrente-somma_tot_nascita)/365;
    printf("Il soggetto ha %d anni \n", totale_anni);

    return 0;
    }
