/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Scrivere un programma che calcoli la media aritmetica e la media geometrica di N numeri presi in input
Write a program in C that, given N numbers from input, calculates the arithmetic mean and the geometric mean

In this exercise, I used an array to keep track of which numbers the user has entered
But you can avoid the use of it
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num, somma=0, moltiplicazione=1;
    float arit, geom, esp;
    do
    {
        printf("Quanti numeri vuoi inserire? ");
        scanf("%d", &num); //integer numbers
    }while(num<=0);

    int vettore[num];

    for(int i=0; i<num; i++)
    {
        printf("Inserisci il valore %d: ", i+1);
        scanf("%d", &vettore[i]);
    }

    //Possiamo usare anche un solo ciclo for
    //We could use just a single for cycle
    for(int i=0; i<num; i++)
    {
        somma=somma+vettore[i];
        moltiplicazione=moltiplicazione*vettore[i];
    }
    arit=somma/num; //Media aritmetica
    esp=1/(float)num; //Casting per l'esponente
    geom=pow(moltiplicazione, esp); //Media geometrica

    printf("\nLa media aritmetica vale: %f\n", arit);
    printf("La media geometrica vale: %f\n", geom);

    return 0;
}
