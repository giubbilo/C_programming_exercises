#include <stdio.h>
#include <string.h>

struct Book
{
    char title[100];
    char author[100];
    int year;
};

int main()
{
    struct Book book;

    // Chiedi all'utente di inserire i dati del libro
    printf("Inserisci il titolo del libro: ");
    fgets(book.title, sizeof(book.title), stdin);
    printf("Inserisci l'autore del libro: ");
    fgets(book.author, sizeof(book.author), stdin);
    printf("Inserisci l'anno di pubblicazione del libro: ");
    scanf("%d", &book.year);

    // Apri il file in modalità scrittura
    FILE *file = fopen("libro.txt", "a+");

    // Verifica se il file è stato aperto correttamente
    if (file != NULL)
    {
        // Scrivi i dati del libro nel file
        fprintf(file, "%s", book.title);
        fprintf(file, "%s", book.author);
        fprintf(file, "%d\n", book.year);

        // Chiudi il file
        fclose(file);
        printf("I dati del libro sono stati salvati su 'libro.txt'.\n");
    } 
    else
    {
        // Se il file non può essere aperto, mostra un messaggio di errore
        printf("Errore nell'apertura del file.\n");
    }

    char autore[100];
    char riga[300]; // La lunghezza massima potrebbe essere 300 considerando titolo, autore e anno
    int contatore = 0, confronto;
    printf("Inserisci l'autore da cercare: ");
    scanf("%s", autore);
    printf("\n%s\n", autore);
    
    file = fopen("libro.txt", "r");
    if (file != NULL)
    {
        while(fgets(riga, sizeof(riga), file) != NULL)
        {
            confronto = strcmp(autore, riga);
            if (confronto == 0)
            {
                printf("Autore trovato: %s", riga);
                contatore++;
            }
        }
        fclose(file);
    }
    else
    {
        printf("Errore nell'apertura del file per la ricerca.\n");
    }

    if (contatore == 0)
    {
        printf("Nessun libro trovato per l'autore specificato.\n");
    }

    return 0;
}