#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //armstrong zahlen

    int h = 0, z = 0, e = 0, summe = 0, zahl = 100;

    printf("3-stellige Armstrong Zahlen\n");
    printf("----------------------------\n\n");
    
    while(zahl >= 100 && zahl <= 999)
    {
        e = zahl % 10;
        z = (zahl / 10) % 10;
        h = (zahl / 100) % 10;

        summe = h * h * h + z * z * z + e * e * e;

        if (summe == zahl)
        {
            printf("%d = %d^3 + %d^3 + %d^3\n", zahl, h, z, e);
        }
        zahl++;
    }
}