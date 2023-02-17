#include <stdio.h>
#include <math.h>

int main(void){
    double Gehalt = 0, Spende = 0;

    printf("Gehalt: ");
    scanf("%lf", &Gehalt);

    if (Gehalt < 1000)
    {
        Spende = Gehalt * 0.005;
        printf("Spende: %.2lf ", Spende);
    }
    else if (Gehalt > 1000 && Gehalt < 2000){
        Spende = Gehalt * 0.01;
        printf("Spende: %.2lf ", Spende);
    }
    else{
        Spende = 25;

        printf("Spende: %.2lf ", Spende);
    }
}