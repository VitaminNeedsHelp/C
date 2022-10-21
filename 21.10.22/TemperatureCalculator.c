#include <stdio.h>
#include <math.h>

int main(void)
{
    int auswahl;
    double temperaturCelcius = 0;
    double temperaturFahrenheit = 0;
    double temperaturKelvin = 0;

    printf("Bitte waehlen Sie eine der folgenden Optionen aus: \n");
    printf("1. Celsius in Fahrenheit umrechnen \n");
    printf("2. Fahrenheit in Celsius umrechnen \n");
    printf("3. Celsius in Kelvin umrechnen \n");
    printf("4. Kelvin in Celsius umrechnen \n");
    printf("5. Fahrenheit in Kelvin umrechnen \n");
    printf("6. Kelvin in Fahrenheit umrechnen \n");
    printf("7. Beenden \n");
    printf("Ihre Auswahl: ");

    scanf("%d", &auswahl);

    switch (auswahl)
    {
        case 1:
            printf("Bitte geben Sie die Temperatur in Celsius ein: ");
            scanf("%lf", &temperaturCelcius);
            temperaturFahrenheit = (temperaturCelcius * 9 / 5) + 32;
            printf("Die Temperatur in Fahrenheit betraegt: %.2lf", temperaturFahrenheit);
            return 0;
            break;
        case 2:
            printf("Bitte geben Sie die Temperatur in Fahrenheit ein: ");
            scanf("%lf", &temperaturFahrenheit);
            temperaturCelcius = (temperaturFahrenheit - 32) * 5 / 9;
            printf("Die Temperatur in Celsius betraegt: %.2lf", temperaturCelcius);
            return 0;
            break;
        case 3:
            printf("Bitte geben Sie die Temperatur in Celsius ein: ");
            scanf("%lf", &temperaturCelcius);
            temperaturKelvin = temperaturCelcius + 273.15;
            printf("Die Temperatur in Kelvin betraegt: %.2lf", temperaturKelvin);
            return 0;
            break;
        case 4:
            printf("Bitte geben Sie die Temperatur in Kelvin ein: ");
            scanf("%lf", &temperaturKelvin);
            temperaturCelcius = temperaturKelvin - 273.15;
            printf("Die Temperatur in Celsius betraegt: %.2lf", temperaturCelcius);
            return 0;        
            break;
        case 5:
            printf("Bitte geben Sie die Temperatur in Fahrenheit ein: ");
            scanf("%lf", &temperaturFahrenheit);
            temperaturKelvin = (temperaturFahrenheit - 32) * 5 / 9 + 273.15;
            printf("Die Temperatur in Kelvin betraegt: %.2lf", temperaturKelvin);
            return 0;        
            break;
        case 6:
            printf("Bitte geben Sie die Temperatur in Kelvin ein: ");
            scanf("%lf", &temperaturKelvin);
            temperaturFahrenheit = (temperaturKelvin - 273.15) * 9 / 5 + 32;
            printf("Die Temperatur in Fahrenheit betraegt: %.2lf", temperaturFahrenheit);
            return 0;        
            break;
        case 7:
            printf("Programm wird beendet. \n");
            return 0;
            break;
        default:
            printf("Fehlerhafte Eingabe. \n");
            break;
    }
    return 0;
}