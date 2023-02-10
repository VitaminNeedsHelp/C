#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x = 0, y = 0, z = 0, zahl = 0;
    double celsius = 0, fahrenheit = 0;

    srand((unsigned)time(NULL));

    printf("Welche Nummer vom Test?\n1. Fahrenheit to Celsius\n2. Gewinnspiel mit W\x81rfel\n(Bei einer ung\x81ltigen Eingabe wird das Programm beendet)\nDeine Eingabe (1-2): ");
    scanf("%d", &x);

    switch(x){
        case 1:
            printf("1.Fahrenheit to Celsius\n2.Celsius to Fahrenheit\nAuswahl (1-2): ");
            scanf("%d", &y);
            switch(y){
                case 1:
                    printf("Fahrenheit to Celsius\n");
                    printf("Bitte geben Sie die Temperatur in Fahrenheit ein: ");
                    scanf("%lf", &fahrenheit);
                    celsius = (fahrenheit - 32) * 5.0 / 9.0;
                    printf("%.2lf Fahrenheit = %.2lf Celsius\n", fahrenheit, celsius);
                    return 0;
                case 2:
                    printf("Celsius to Fahrenheit\n");
                    //Celcius to Fahrenheit
                    printf("Bitte geben Sie die Temperatur in Celsius ein: ");
                    scanf("%lf", &celsius);
                    fahrenheit = (celsius * 9.0 / 5.0) + 32;    
                    printf("%.2lf Celsius = %.2lf Fahrenheit\n", celsius, fahrenheit);
                    return 0;
                default:
                    printf("Ung\x81ltige Eingabe\n Programm wird beendet\n");
                    return 0;
            }
            break;
        case 2:
            printf("Gewinnspiel mit W\x81rfel\n");
            do{
                printf("Welche Augenzahl wird der Computer w\x81rfeln?\nDeine Eingabe (1-6): ");
                scanf("%d", &z);
                fflush(stdin);
                if(z < 1 || z > 6){
                    printf("Ung\x81ltige Eingabe, geben Sie eine Zahl von 1-6 ein!\n");
                }
            }while(z < 1 || z > 6);

            zahl = rand() % (6 + 1 - 1) + 1;
            printf("Der Computer hat eine %d gew\x81rfelt\n", zahl);

            if(z == zahl){
                printf("Du hast GEWONNEN!\n");
            }
            else{
                printf("Du hast verloren! Versuch es nochmal!\n");
            }
            break;
        default:
            printf("Ung\x81ltige Eingabe\n Programm wird beendet\n");
            return 0;
    }
}