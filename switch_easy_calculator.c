/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Scrivere un programma che simuli una calcolatrice con add, sub, molt, div ed eviti le divisioni per zero"
Write a program that simulates a calculator with add, sub, molt, div and avoid divisions by zero"
*/

#include <stdio.h>

int main()
{
    int operazione, scelta=0;
    float a, b, risultato=0;
    do
    {
        printf("\tSe vuoi inserire numeri decimali, inseriscili con il punto .\n\n");
        printf("Inserisci il primo numero: ");
        scanf("%f",&a);
        printf("Inserisci il secondo numero: ");
        scanf("%f",&b);

        printf("1 - ESEGUE LA SOMMA\n");
        printf("2 - ESEGUE LA SOTTRAZIONE\n");
        printf("3 - ESEGUE LA MOLTIPLICAZIONE \n");
        printf("4 - ESEGUE LA DIVSIONE \n");
        printf("\nCosa scegli? ");
        scanf("%d", &operazione);

        switch(operazione)
        {
            case 1:
                risultato = a+b;
                printf("Il risultato e': %.4f \n", risultato);
                break;
            case 2:
                risultato = a-b;
                printf("Il risultato e': %.4f \n", risultato);
                break;
            case 3:
                risultato = a*b;
                printf("Il risultato e': %.4f \n", risultato);
                break;
            case 4:
                if(b==0)
                {
                    printf("Divisione per 0! Impossibile!\n");
                    return 0;
                }
                risultato = a/b;
                printf("Il risultato e': %4.f \n", risultato);
                break;
            default: // Default condition if we do not reach any case
                printf("Operazione non riconosciuta \n");
        }

        printf("\nDigitare '1' per continuare o un qualsiasi altro carattere per uscire: ");
        scanf("%d", &scelta);
    }while(scelta == 1); //Go back

    return 0;
}
