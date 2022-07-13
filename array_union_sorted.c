#include<stdio.h>

void inseriscivettore(int, int []);
void selectionsort(int, int[]);

int main()
{
    int dim1, dim2, i;
    printf("Inserisci la dimensione del primo vettore: ");
    scanf("%d", &dim1);
    printf("Inserisci la dimensione del secondo vettore: ");
    scanf("%d",&dim2);
    int dim3=dim1+dim2;
    int vettore1[dim1], vettore2[dim2], vettore3[dim3];

    //int *vettore;
    inseriscivettore(dim1, vettore1);
    inseriscivettore(dim2, vettore2);

    for(i=0; i<dim1; i++)
    {
            vettore3[i]=vettore1[i];
    }
    for(int j=0; j<dim2; j++)
    {
            vettore3[i]=vettore2[j];
            i++;
    }

    //Ordino il vettore
    selectionsort(dim3, vettore3);

    printf("Il vettore unito sara':");
    for(int i=0; i<dim3; i++)
    {
        printf("%4d", vettore3[i]);
    }
    return 0;
}

void inseriscivettore(int dim, int vettore[])
{
    for(int i=0; i<dim; i++)
    {
        printf("INSERISCI I VALORI NEL VETTORE 1 IN POSIZIONE %d: ", i);
        scanf("%d", &vettore[i]);
    }
}

void selectionsort(int dim, int a[])
{
    int temp, min;
    for(int i=0; i<dim-1; i++)
    {
        min=i;
        for(int j=i+1; j<dim; j++)
        {
            //Tro il valore minimo all'interno dell'array
            if(a[j]<a[min])
                min=j;
        }
        //Si scambia con l'elemento alla posizione i
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}
