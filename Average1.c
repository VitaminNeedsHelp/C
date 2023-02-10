#include <stdio.h>
#include <stdlib.h>

int main(void){
    //durchschnittsberechnung zwischen x und y

    int x, y;
    float avg;

    printf("Geben Sie x ein: ");
    scanf("%d", &x);
    printf("Geben Sie y ein: ");
    scanf("%d", &y);

    avg = (x + y) / 2.0;

    printf("Der Durchschnitt von %d und %d ist %.2f", x, y, avg);
}