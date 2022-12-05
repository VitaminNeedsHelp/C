#include <stdio.h>
#include <stdlib.h>

int main(void){
    int note = 0;

    printf("Bitte geben Sie eine Note zwischen 1 und 5 ein: ");

    scanf("%d", &note);

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
                printf("Nicht Gen\x81gend");
                break;
    
            default:
                printf("Fehlerhafte Eingabe");
                break;
            }
}
