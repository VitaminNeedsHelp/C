#include <stdio.h>
#include <math.h>

int main(void)
{
    double radius, volume, surface_area;

    printf("Radius der ersten Kugel eingeben [cm]: ");
    scanf("%lf", &radius);

    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    surface_area = 4.0 * M_PI * pow(radius, 2);

    printf("Oberflaeche: %10.2f cm2", surface_area);
    printf("\nVolumen: %14.2f cm3\n", volume);

    fflush(stdin);

    printf("Radius der zweiten Kugel eingeben [cm]: ");
    scanf("%lf", &radius);

    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    surface_area = 4.0 * M_PI * pow(radius, 2);

    printf("Oberflaeche: %10.2f cm2\n", surface_area);
    printf("Volumen: %14.2f cm3", volume);
}