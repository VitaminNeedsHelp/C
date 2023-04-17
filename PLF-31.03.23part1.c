#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double rp = 0, rl = 0, ue = 0, ua = 0; 
    double prozent = 0;

    //Eingabe mit Plausibilitaetspruefung
    do{
        printf("Geben Sie den Widerstandswert des Potentionmeters RP [Ohm] ein: ");
        fflush(stdin);
        scanf("%lf", &rp);
    }while(rp <= 0);

    do{
        printf("Geben Sie den Widerstandswert des Lastwiderstandes RL [Ohm] ein: ");
        fflush(stdin);
        scanf("%lf", &rl);
    }while(rl <= 0);

    do{
        printf("Geben Sie den Wert der Versorgungsspannung Ue [V] ein: ");
        fflush(stdin);
        scanf("%lf", &ue);
    }while(ue <= 0);

    printf("Prozent | UA");

    //Ausgabe mit Balkendiagramm

    for (prozent = 0; prozent <= 100; prozent += 10)
    {
        ua = (((prozent/100) * rl) / ((prozent/100) * rp * (1 - (prozent/100)) + rl)) * ue ;
        printf("\n%7.0lf | %5.2lf ", prozent, ua);
        
        for(int i = 0; i < (ua/ue)*100; i++)
        {
            printf("|");
        }
    }

}