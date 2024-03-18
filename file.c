#include <stdio.h>

int main()
{
    FILE *file;
    char carattere, testo[100];

    /*
    "r" - Lettura: Apre il file in modalità di sola lettura. Il file deve esistere altrimenti l'apertura fallirà.
    "w" - Scrittura: Apre il file in modalità di sola scrittura. Se il file esiste già, il suo contenuto viene eliminato.
        Se il file non esiste, viene creato.
    "a" - Aggiunta: Apre il file in modalità di scrittura alla fine del file. 
        I dati scritti vengono aggiunti al contenuto esistente del file. Se il file non esiste, viene creato.
    "r+" - Lettura/Scrittura: Apre il file in modalità di lettura/scrittura. 
        Il file deve esistere altrimenti l'apertura fallirà.
    "w+" - Lettura/Scrittura: Apre il file per la lettura e la scrittura, eliminando il contenuto esistente. 
        Se il file non esiste, viene creato.
    "a+" - Lettura/Aggiunta: Apre il file per la lettura e la scrittura alla fine del file.
        Il contenuto esistente rimane intatto, mentre i nuovi dati vengono aggiunti alla fine. Se il file non esiste, viene creato.
    */

    // Apre il file in modalità scrittura
    file = fopen("C:/Users/Davide/Desktop/output.txt", "a+");
    
    // Controlla se l'apertura del file è riuscita
    if (file == NULL) {
        printf("Impossibile aprire il file.");
        return 1;
    }

    // Scrive una stringa nel file
    //fprintf(file, "Questo è un esempio di scrittura su file in C.\n");
    // Legge il testo inserito dall'utente
    printf("Adesso scrivi tu: ");
    fgets(testo, sizeof(testo), stdin);

    // Scrive il testo nel file
    fprintf(file, "%s", testo);

    // Chiude il file
    fclose(file);

    // Apre il file in modalità lettura
    file = fopen("C:/Users/Davide/Desktop/output.txt", "a+");
    
    // Controlla se l'apertura del file è riuscita
    if (file == NULL) {
        printf("Impossibile aprire il file.");
        return 1;
    }

    // Legge e stampa carattere per carattere fino alla fine del file
    while ((carattere = fgetc(file)) != EOF)
    {
        printf("%c", carattere);
    }

    // Chiude il file
    fclose(file);
    return 0;
}