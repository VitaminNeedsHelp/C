#include <stdio.h>
#include <stdlib.h>


int main(void){

    int eingabe = 0;

    printf("Bitte geben Sie eine Zahl zwischen 1 und 7 ein: ");

    scanf("%d", &eingabe);

    switch(eingabe){

        case 1:
            printf("Montag");
            break;

        case 2:
            printf("Dienstag");
            break;

        case 3:
            printf("Mittwoch");
            break;

        case 4:
            printf("Donnerstag");
            break;

        case 5:
            printf("Freitag");
            break;

        case 6:
            printf("Samstag");
            break;

        case 7:
            printf("Sonntag");
            break;

        default:
            printf("Fehlerhafte Eingabe");
            break;
    }

}