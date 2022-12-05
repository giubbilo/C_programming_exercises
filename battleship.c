/*DAVIDE GIANNUBILO - Esercizi Linguaggio C
Scrivere un programma che simuli il gioco "battaglia navale"
Write a program in C that simulates "Battleships" game
*/

#include<stdio.h>
#include<time.h>
#include<windows.h>

const int LATO=10;

void SetColor(unsigned short);
void genera_cord();
void stampa(char matrice[LATO][LATO]);

//Declared globally in order to use them in the function "genera_cord"
int r1, r2, r3, r4, r5, r6; 

int main()
{

    int c1, c2, opzione;
    char matrice[LATO][LATO], scelta;

    printf("\n\t\t BENVENUTO NEL MENU \n\n");
    printf("Premi 1 per giocare\n");
    printf("Premi 2 per uscire\n");
    printf("Tasto -> ");
    scanf("%c", &scelta);
    while(scelta == '1')
    {
        int tentativi = 3, numcarri=3;
        system("cls");
        printf("\n");
        for(int i=1; i<=LATO; i++)
        {
            for(int j=1; j<=LATO; j++)
            {
                matrice[i][j]='.';
                SetColor(7);
                printf("|.%c.", matrice[i][j]);
            }
            printf("|");
            printf("\n");
        }

        genera_cord();

        do
        {
            printf("\nDove vuoi sparare? ");
            printf("Inserisci le coordinate: ");
            scanf("%d %d", &c1, &c2);
            while(c1 <= 0 || c2 <= 0 || c1 > LATO || c2 > LATO)
            {
                printf("Hai inserito un numero inferiore o uguale a zero. Reinserisci le coordinate -> ");
                scanf("%d %d", &c1, &c2);
            }
            if(c1 == r1 && c2 == r2 || c1 == r3 && c2 == r4 || c1 == r5 && c2 == r6) //Se colpisci
            {
                numcarri--;
                tentativi--;
                matrice[c1][c2]='X';
                printf("\n\tColpito e affondato!\n");
                if(numcarri==0)
                {
                    printf("\tHAI VINTO!\n\n");
                    tentativi=0;
                    stampa(matrice);
                }
                else
                {
                     printf("\tHai ancora %d tentativi\n\n", tentativi);
                     stampa(matrice);
                }
            } //If
            else //Se non colpisci
            {
                tentativi--;
                matrice[c1][c2]='O';
                printf("\n\tObiettivo mancato!\n");
                if(tentativi==0)
                {
                    system("cls");
                    printf("\n\tHAI PERSO!\n\n");
                    stampa(matrice);
                }
                else
                {
                    printf("\tHai ancora %d tentativi\n\n", tentativi);
                    stampa(matrice);
                }
            } //Else
        }while(tentativi>0);
        printf("\nGli obiettivi erano in posizione %d - %d \t %d - %d \t %d - %d\n", r1, r2, r3, r4, r5, r6);
        printf("\nVuoi fare un'altra partita?\n");
        printf("Premi 1 per rigiocare o qualsiasi altro numero per uscire: ");
        scanf(" %c", &scelta);
        if(scelta != '1')
        {
            return 0;
        }
        system("cls");
    }
    return 0;
}

void SetColor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

void stampa(char matrice[LATO][LATO])
{
    for(int i=1; i<=LATO; i++)
    {
        for(int j=1; j<=LATO; j++)
        {
            if(matrice[i][j]=='O' || matrice[i][j]=='X')
            {
                SetColor(14);
                printf("|.%c.", matrice[i][j]);
                SetColor(7);
            }
            else
                printf("|.%c.", matrice[i][j]);
        }
        printf("|");
        printf("\n");
    }
}

void genera_cord()
{
    int cord[6];
    srand((unsigned) time(NULL));

    for(int i=0; i<6; i++)
    {
        cord[i] = (rand()%LATO);
        if(cord[i] == 0)
        {
            cord[i] = cord[i] + 1;
        }
    }

    while(cord[0] == cord[2] && cord[1] == cord[3])
    {
        cord[2] = (rand()%LATO);
        cord[3] = (rand()%LATO);
    }
    while(cord[0] == cord[4] && cord[1] == cord[5])
    {
        cord[4] = (rand()%LATO);
        cord[5] = (rand()%LATO);
    }
    while(cord[2] == cord[4] && cord[3] == cord[5])
    {
        cord[4] = (rand()%LATO);
        cord[5] = (rand()%LATO);
    }
    r1 = *(cord+0);
    r2 = *(cord+1);
    r3 = *(cord+2);
    r4 = *(cord+3);
    r5 = *(cord+4);
    r6 = *(cord+5);
    printf("\n%d \t %d", cord[0], cord[1]);
    printf("\n%d \t %d", cord[1], cord[3]);
    printf("\n%d \t %d\n", cord[4], cord[5]);
}
