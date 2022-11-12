#include <stdio.h>
#include <math.h>

int main(void){
    int num1 = 0 , num2 = 0, numMax = 0, numMin = 0;

    printf("Zahl 1: ");
    scanf("%d", &num1);
    printf("Zahl 2: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        numMax = num1;
        numMin = num2;
        printf("%d > %d", numMax, numMin);
    }
    else if (num1 < num2)
    {
        numMax = num2;
        numMin = num1;
        printf("%d > %d", numMax, numMin);
    }
    else
    {
        printf("Die Zahlen sind gleich groß.");
        return 0;
    }
}