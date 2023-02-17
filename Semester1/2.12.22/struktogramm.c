#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b, asave,bsave;

    printf("Bitte geben Sie zwei Zahlen ein: \n");
    printf("zahl1: ");
    scanf("%d", &a);
    printf("zahl2: ");
    scanf("%d", &b);
    asave = a;
    bsave = b;

    if (a % b == 0){
        switch(b){
            case 1:
            case 2:
            case 3:
            case 4:
                b /= 5;
                printf("%d", b);
                break;
            case 5:
            case 6:
                b *= 5;
                printf("%d", b);
                break;
            default:
                b *= b;
                printf("%d", b);
                break;
        }
    }
    else{
        b = asave;
        a = bsave;
        printf("%d", b);
    }
}