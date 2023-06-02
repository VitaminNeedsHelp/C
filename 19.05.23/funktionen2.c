#include <stdio.h>
#include <math.h>


double hypothenuse(double a, double b);
double flaeche(double a, double b);
double umfang(double a, double b, double c);

int main(void)
{
    double a, b, c;
    printf("Bitte geben Sie die Seiten a und b [cm] ein (getrennt mit space): ");
    scanf("%lf %lf", &a, &b);
    printf("Die Hypothenuse ist %.2lfcm lang.\n", hypothenuse(a, b));
    c=hypothenuse(a, b);
    printf("Die Fl\x84\x63he ist %.2lfcm2 gro\xe1.\n", flaeche(a, b));
    printf("Der Umfang ist %.2lfcm lang.", umfang(a, b, c));
    return 0;
}

double hypothenuse(double a, double b)
{
    return sqrt(a * a + b * b);
}

double flaeche(double a, double b)
{
    return (a*b)/2;
}

double umfang(double a, double b, double c)
{
    return a+b+c;
}
