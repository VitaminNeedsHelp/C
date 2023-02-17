#include <stdio.h>
#include <stdlib.h>

int main(void){
    char smallLetter = 0;

    printf("Bitte geben Sie einen Kleinbuchstaben ein: ");

    scanf("%c", &smallLetter);

    switch(smallLetter){

        case 'a':
            printf("A");
            break;
        case 'b':
            printf("B");
            break;
        case 'c':
            printf("C");
            break;
        case 'd':
            printf("D");
            break;
        case 'e':
            printf("E");
            break;
        case 'f':
            printf("F");
            break;
        case 'g':
            printf("G");
            break;
        case 'h':
            printf("H");
            break;
        case 'i':
            printf("I");
            break;
        case 'j':
            printf("J");
            break;
        case 'k':
            printf("K");
            break;
        case 'l':   
            printf("L");
            break;
        case 'm':   
            printf("M");
            break;
        case 'n':
            printf("N");
            break;
        case 'o':
            printf("O");
            break;
        case 'p':   
            printf("P");
            break;
        case 'q':
            printf("Q");
            break;
        case 'r':
            printf("R");
            break;
        case 's':
            printf("S");
            break;
        case 't':
            printf("T");
            break;
        case 'u':   
            printf("U");
            break;
        case 'v':
            printf("V");
            break;
        case 'w':   
            printf("W");
            break;
        case 'x':                       
            printf("X");
            break;
        case 'y':
            printf("Y");
            break;
        case 'z':
            printf("Z");
            break;
        default:
            printf("Fehlerhafte Eingabe");
            break;
        }


    }
