#include <stdio.h>
#include <stdlib.h>

int main(void){

    int note;
    char eingabe[100];
    int versuche = 0;

    do{
        printf("Bitte geben Sie eine Note von 1-5 ein: ");
        fgets(eingabe, 100, stdin);
        note = atoi(eingabe);
        versuche++;
        if (versuche == 3 && (note < 1 || note > 5)){
            printf("Sie haben 3 Versuche verbraucht. Programm wird beendet.");
            return 0;
        }
    }while(note < 1 || note > 5);
    switch(note){
        case 1:
            printf("Sehr gut");
            break;
        case 2:
            printf("Gut");
            break;
        case 3:
            printf("Befriedigend");
            break;
        case 4:
            printf("Gen\x81gend");
            break;
        case 5:
            printf("Nicht gen\x81gend");
            break;
    }

    printf("\nEingabe nach %d Versuchen.", versuche);

}