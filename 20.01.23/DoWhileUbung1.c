#include <stdio.h>
#include <stdlib.h>

int main(void){

    int note;
    char eingabe[100];

    do{
        printf("Bitte geben Sie eine Note von 1-5 ein: ");
        fgets(eingabe, 100, stdin);
        note = atoi(eingabe);
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
}