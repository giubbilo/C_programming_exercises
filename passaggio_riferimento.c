#include <stdio.h>

// Funzione che modifica il valore del parametro attraverso il puntatore
void modifica(int *x) {
    *x = 20; // Modifica la variabile puntata dal puntatore
}

int main() {
    int variabile = 10;

    printf("Valore prima della modifica: %d\n", variabile);

    // Passaggio del parametro per riferimento utilizzando un puntatore
    modifica(&variabile);

    printf("Valore dopo la modifica: %d\n", variabile);

    return 0;
}
