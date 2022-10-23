#include <stdio.h>
#include <math.h>

int main(void)
{
    double seitenlaenge, hoehe, volumen, oberflaeche;

    printf("Seitenlaenge der Pyramide eingeben [cm]: ");
    scanf("%lf", &seitenlaenge);
    printf("Hoehe der Pyramide eingeben [cm]: ");
    scanf("%lf", &hoehe);

    volumen = pow(seitenlaenge, 2) * hoehe / 3;
    oberflaeche = pow(seitenlaenge, 2) + 2 * seitenlaenge * sqrt(pow(seitenlaenge / 2, 2) + pow(hoehe, 2));

    printf("Oberflaeche der Pyramide: %7.2lf cm2\n", oberflaeche);
    printf("Volumen der Pyramide: %11.2lf cm3", volumen);
}