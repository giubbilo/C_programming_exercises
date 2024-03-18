#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];
    char string2[100];

    printf("Inserisci la prima stringa: ");
    scanf("%s", string1);

    printf("Inserisci la seconda stringa: ");
    scanf("%s", string2);

    int result = strcmp(string1, string2);

    if (result == 0) {
        printf("Le stringhe sono uguali.\n");
    } else if (result < 0) {
        printf("La prima stringa è minore della seconda.\n");
    } else {
        printf("La prima stringa è maggiore della seconda.\n");
    }

    return 0;
}