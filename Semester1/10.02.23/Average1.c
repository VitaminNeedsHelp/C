#include <stdio.h>
#include <stdlib.h>


int avrg(int x, int y){
    return (x+y)/2;
}

int main(void){
    int x, y;
    float avg;

    printf("Geben Sie x ein: ");
    scanf("%d", &x);
    printf("Geben Sie y ein: ");
    scanf("%d", &y);

    avg = avrg(x, y);

    printf("Der Durchschnitt von %d und %d ist %.2f", x, y, avg);

}

