//Loancalculator

#include <stdio.h>
#include <math.h>

int main(void)
{
    double Zinssatz = 0.00;
    double Laufzeit = 0.00, Rate = 0.00;
    float Gesamt = 0.00, q = 0.00;

    printf("Monatliche Rate in Euro: ");
    fflush(stdin);
    scanf("%lf", &Rate);
    printf("Laufzeit in Monaten: ");
    fflush(stdin);
    scanf("%lf", &Laufzeit);
    printf("Zinssatz in %%: ");
    fflush(stdin);
    scanf("%lf", &Zinssatz);

    q = 1 + Zinssatz/1200;
    Gesamt = Rate * (1 - pow(q, Laufzeit)) / (1 - q);

    printf("Gesamtkapital nach %lf Monaten: %.2f Euro", Laufzeit, Gesamt);
}