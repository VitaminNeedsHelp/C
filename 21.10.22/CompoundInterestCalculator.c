#include <stdio.h>
#include <math.h>

int main(void)
{
    int Grundkapital = 0, Laufzeit = 0;
    double Zinssatz = 0.0;
    float Endkapital = 0.00, r = 0.00;    


    printf("Grundkapital: ");
    fflush(stdin);
    scanf("%d", &Grundkapital);
    printf("Laufzeit in Jahren: ");
    fflush(stdin);
    scanf("%d", &Laufzeit);
    printf("Zinssatz in %%: ");
    fflush(stdin);
    scanf("%lf", &Zinssatz);
    r = 1 + (Zinssatz / 100);
    Endkapital = Grundkapital * pow(r, Laufzeit);
    printf("Gesamtkapital nach %d Jahren: %.2f Euro", Laufzeit, Endkapital);
}