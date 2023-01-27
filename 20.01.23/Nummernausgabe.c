#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, n;
    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &n);

//Gib in jeder Zeile maximal fünf Zahlen aus. Jede Zahl soll auf 4 Stellen ausgegeben werden.
        if(i%5==0)
            printf("\n");
    for(i=1; i<=n; i++){
        if(i%6==0){
            printf("\n");
        }
        else{
            printf("%4d", i);
        }
    }
    return 0;
}