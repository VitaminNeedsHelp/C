#include <stdio.h>
#include <math.h>

int main(void)
{
    char pwdc[10];
    int p = 0;
    int n = 0, q = 0;

    printf("Passwort: ");
    scanf("%s", pwdc);

    if (strcmp(pwdc, "vier")==0)
    {
        system("cls");
        printf("1. Gerade oder ungerade Zahl?\n2. Quersumme\nAuswahl: ");
        scanf("%d", &p);

        if(p == 1)
        {
            printf("Gerade oder ungerade Zahl?\nZahl: ");
            scanf("%d", &n);
            if (n % 2 == 0)
            {
                printf("Die Zahl ist gerade.\n");
            }
            else
            {
                printf("Die Zahl ist ungerade.\n");
            }
        }
        else if(p == 2)
        {
            printf("Quersumme\nZahl: ");
            scanf("%d", &n);
            while(n > 0)
            {
                q += n % 10;
                n /= 10;
            }
            printf("Die Quersumme ist: %d\n", q);
        }
        else
        {
            printf("Fehlerhafte Eingabe!\n");
        }
    }
    else
    {
        printf("Passwort falsch");
        return 0;
    }
}