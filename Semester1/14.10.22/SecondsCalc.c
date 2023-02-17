#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m, s;

    printf("Eingabe der Stunden: ");
    fflush(stdin);
    scanf("%d", &h);
    printf("Eingabe der Minuten: ");
    fflush(stdin);
    scanf("%d", &m);
    printf("Eingabe der Sekunden: ");
    fflush(stdin);
    scanf("%d", &s);

    printf("\nSeit Mitternacht sind %1d Sekunden vergangen.", h*3600+m*60+s);
}