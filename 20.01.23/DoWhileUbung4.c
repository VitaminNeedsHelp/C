#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i = 0;
    int sum = 0;
    int input = 0;
    do{
        printf("Bitte geben Sie eine Zahl ein: ");
        scanf("%d", &input);
        if(input >= -1000 && input <= 1000){
            sum += input;
            i++;
        }
    }while(i < 5 && (input >= -1000 || input <= 1000));
    printf("Die Summe der Zahlen ist: %d", sum);
}