#include <stdio.h>
#include <stdlib.h>

int main(void){
    int zahl1 = 0, zahl2 = 0, ergebnis = 0;
    char operator = 0;

    printf("Bitte geben Sie eine Rechnung ein: ");

    scanf("%d %c %d", &zahl1, &operator, &zahl2);

    switch(operator){
        case '+':
            ergebnis = zahl1 + zahl2;
            printf("%d + %d = %d", zahl1, zahl2, ergebnis);
            break;
        case '-':
            ergebnis = zahl1 - zahl2;
            printf("%d - %d = %d", zahl1, zahl2, ergebnis);
            break;
        case '*':
            ergebnis = zahl1 * zahl2;
            printf("%d * %d = %d", zahl1, zahl2, ergebnis);
            break;
        case '/':
            ergebnis = zahl1 / zahl2;
            printf("%d / %d = %d", zahl1, zahl2, ergebnis);
            break;
        default:
            printf("Fehlerhafte Eingabe");
            break;
    }
}