/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Scrivere un programmi che trasformi un numero decimale in binario
Write a program that turns a decimal number to binary
*/

#include<stdio.h>

int main()
{
    int num, resto, cont=0;
    do
    {
        printf("INSERISCI IL NUMERO DECIMALE DA CONVERTIRE \n");
        scanf("%d", &num);
    }while(num<=0);

    int vettore[50]; //Set max dimension to 50

    while(num>0) //Exit when our number becomes 0
    {
        resto = num % 2;
        vettore[cont] = resto; //Put resto into the array
        num = num / 2; //Divide the num by 2
        cont++; //We use this variable to know ho many divisions we have done
    }

    for(int i=cont-1; i>=0; i--) //Print the resto starting from the first one obtained in the first divsion
    {
        printf("%d", vettore[i]);
    }

    return 0;
}
