/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Date 2 date in input, quella di nascita e quella odierna, dire se la persona è maggiorenne oppure no e qual è la sua età
Given 2 dates in input, birth date and current date, say if the person is of age or not and what is his/her age
*/

#include<stdio.h>
int main()
{
    int g, mese, anno, g2, mese2, anno2, sommanascita, sommaoggi;
    printf("Data da controllare\n");

    do
    {
        printf("Inserisci il giorno: ");
        scanf("%d", &g);
        printf("Inserisci il mese: ");
        scanf("%d", &mese);
        printf("Inserisci l'anno: ");
        scanf("%d",&anno);
    }while(g<=0 || g>31 || mese<=0 || mese>12 || anno<=1900 || anno>=2100);

    printf("\nLa data di nascita inserita e' %d-%d-%d \n\n", g, mese,anno);

    printf("Inserisci la data odierna \n");
    do
    {
        printf("Inserisci il giorno: ");
        scanf("%d", &g2);

        printf("Inserisci il mese: ");
        scanf("%d", &mese2);

        printf("Inserisci l'anno: ");
        scanf("%d",&anno2);
    }while(g2<=0 || g2>31 || mese2<=0 || mese2>12 || anno2<=1900 || anno2>=2100);

    printf("\nLa data odierna e' %d-%d-%d \n\n", g2, mese2,anno2);

    sommaoggi=(anno2*365)+(mese2*30)+g2;
    sommanascita=(anno*365)+(mese*30)+g;

    //18 years old = 6570 days
    if((sommaoggi-sommanascita)>6570)
            printf("La persona e' maggiorenne ed ha %d anni\n", ((sommaoggi-sommanascita)/365));
    else
        printf("La persona e' minorenne ed ha %d anni\n", ((sommaoggi-sommanascita)/365));

    return 0;
}
