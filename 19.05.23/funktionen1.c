#include <stdio.h>
#include <math.h>

double hypothenuse(double a, double b);

int main(void)
{
    double a, b;
    printf("Bitte geben Sie die Seiten a und b [cm] ein (getrennt mit space): ");
    scanf("%lf %lf", &a, &b);
    printf("Die Hypothenuse ist %.2lfcm lang.", hypothenuse(a, b));
    return 0;
}

double hypothenuse(double a, double b)
{
    return sqrt(a * a + b * b);
}