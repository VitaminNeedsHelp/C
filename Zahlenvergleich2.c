#include <stdio.h>
#include <math.h>

int main(void){
    int num1 = 0 , num2 = 0, num3 = 0, numMax = 0, numMin = 0, numMiddle;

    printf("Zahl 1: ");
    scanf("%d", &num1);
    printf("Zahl 2: ");
    scanf("%d", &num2);
    printf("Zahl 3: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        numMax = num1;
        if (num2 > num3)
        {
            numMin = num3;
            numMiddle = num2;
        }
        else
        {
            numMin = num2;
            numMiddle = num3;
        }
        printf("%d > %d > %d", numMax, numMiddle, numMin);
    }
    else if (num2 > num1 && num2 > num3)
    {
        numMax = num2;
        if (num1 > num3)
        {
            numMin = num3;
            numMiddle = num1;
        }
        else
        {
            numMin = num1;
            numMiddle = num3;
        }
        printf("%d > %d > %d", numMax, numMiddle, numMin);
    }
    else if (num3 > num1 && num3 > num2)
    {
        numMax = num3;
        if (num1 > num2)
        {
            numMin = num2;
            numMiddle = num1;
        }
        else
        {
            numMin = num1;
            numMiddle = num2;
        }
        printf("%d > %d > %d", numMax, numMiddle, numMin);
    }
    else
    {
        printf("Die Zahlen sind gleich groß.");
        return 0;
    }

}