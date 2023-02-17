#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r;

    printf("Bitte den Radius eingeben [m]: ");
    scanf("%f", &r);

    printf("Kreis-Umfang: %12.2f m\n", 2 * r * M_PI);
    printf("Kreis-Flaeche: %11.2f m\n", M_PI * pow(r,2));
}