#include <stdio.h>
#include <math.h>

int main(void)
{
    double begin, end, total, verbrauch;
    printf("Eingeben:\n---------------------------------\n");
    printf("Kilometerstand-Fahrtbegin: ");
    scanf("%lf", &begin);
    printf("Kilometerstand-Fahrtende: ");
    scanf("%lf", &end);
    printf("---------------------------------\nBerechnungsrgebnisse:\n");
    total = end - begin;
    verbrauch = (total / 100) * 7;
    printf("Gefahrene km: %.2lf", total);
    printf("\nSpritverbrauch (in Liter): %.2lf", verbrauch);
}