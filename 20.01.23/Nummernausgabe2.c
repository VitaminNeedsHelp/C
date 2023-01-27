#include <stdio.h>
#include <stdlib.h>

int main(void){

    int number1, number2, i;

    printf("Geben Sie Zahl1 ein: ");
    scanf("%d", &number1);
    printf("Geben Sie Zahl2 ein: ");
    scanf("%d", &number2);

    if(number1>number2){
        i=number1;
        number1=number2;
        number2=i;
    }

    for(i=number1; i<=number2; i++){
        if(number2==i){
            printf(" %d", i);
        }
        else if(i%2==0){
            printf(" %d /", i);
        }
        
    }
    return 0;
}
