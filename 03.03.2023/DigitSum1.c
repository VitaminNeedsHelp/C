#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Schreibe ein Programm, das alle natürlichen zweistelligen Zahlen, welche 6-mal größer sind als deren Ziffernsumme, ausgibt.


    int input = 10;
    int sum = 0;
    int result = 0;
    int u = 1;

    while(input < 100){
        sum = input % 10 + input / 10;
        result = input - 6 * sum;
        if(result >= 0 && input != 54){
            if(u % 10 == 0 && u != 0){
            printf("%d\n", input);;
            }
            else{
            printf("%d\t", input);
            }
        u++;
        }
        input++;
    }
}
