#include <stdio.h>

int main()
{
    int Art, Stk;
    double StkPreis = 543.21;
    char str[20] = "Eur";


    printf("Artikelnummer: ");
    fflush(stdin);
    scanf("%d",&Art);
    printf("Stueckzahl: ");
    fflush(stdin);
    scanf("%d",&Stk);
    printf("Stueckpreis: ");
    fflush(stdin);
    scanf("%lf", &StkPreis);
    
    printf("\nArtikelnummer    Stueckzahl   Stueckpreis\n%-13d%14d%7s%7.2lf", Art, Stk, str, StkPreis);
    return 0;
}