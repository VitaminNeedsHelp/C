//Da die Zahl nur selten auf Anhieb vom Computer richtig erraten werden wird, soll der Benutzer dem Programm nach jedem Rateversuch eine Hilfestellung geben. D.h. wenn die vom Computer generierte Zufallszahl größer, kleiner oder gleich der gedachten Zahl des Benutzers ist, kann der Benutzer dem Programm durch die Eingabe der Kleinbuchstaben

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int zufallszahl, upper = 100 , lower = 1;
    int hilfe = 0, counter = 0;

    srand(time(NULL));


printf("  ______     _     _              _____       _             \n");
printf(" |___  /    | |   | |            |  __ \\     | |            \n");
printf("    / / __ _| |__ | | ___ _ __   | |__) |__ _| |_ ___ _ __  \n");
printf("   / / / _` | '_ \\| |/ _ \\ '_ \\  |  _  // _` | __/ _ \\ '_ \\ \n");
printf("  / /_| (_| | | | | |  __/ | | | | | \\ \\ (_| | ||  __/ | | |\n");
printf(" /_____\\__,_|_| |_|_|\\___|_| |_| |_|  \\_\\__,_|\\__\\___|_| |_|\n\n");

printf("Um den Computer Rate-Hinweise zu geben, benutzen Sie folgende Eingabe-Codes:\n");
printf("k ... Zahl des Benutzers ist kleiner\n");
printf("g ... Zahl des Benutzers ist gr\x94\xE1\x65r\n");
printf("e ... Zahl des Benutzers wurde erraten\n");
printf("a ... Abbruch\n");

    zufallszahl = rand() % 100 + 1;
    printf("Denken Sie sich eine Zahl aus und bet\x84tigen Sie anschlie\xE1\x65nd eine beliebige Taste um\ndas Programm zu starten!\n");
    getch();

    while(1){
        if(hilfe == 'k'){
            upper = zufallszahl;
            zufallszahl = (rand() % (upper + 1 - lower)) + lower;
        }
        else if(hilfe == 'g'){
            lower = zufallszahl;
            zufallszahl = (rand() % (upper + 1 - lower)) + lower;
        }
        do{
            printf("\nLautet Ihre Zahl %d? (k/g/e/a): ", zufallszahl);
            hilfe = getche();
            counter++;
        }while(hilfe != 'k' && hilfe != 'g' && hilfe != 'e' && hilfe != 'a');

        if(hilfe == 'e'){
            printf("\nDie Zahl wurde nach %d Versuchen erraten!\n", counter);
            return 0;
        }
        else if(counter == 20){
            printf("\nDas Programm wurde nach 20 dummen versuchen abgebrochen!\n");
            return 0;
        }
        else if(hilfe == 'a'){
            printf("\nDas Programm wurde abgebrochen!\n");
            return 0;
        }
    }
    return 0;
}