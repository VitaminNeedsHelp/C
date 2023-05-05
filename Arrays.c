#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define SIZE 10

void printArray(int array[], int size){
    for (int i = 0; i <= size; i++){
        if (i == 9){
            printf("Array[%d] = %d ", i, array[i]);
        }
        else{
            printf("Array[%d] = %d | ", i, array[i]);
        }
    }
    printf("\n");
}
void fillArray(int array[], int size){
    for (int i = 0; i <= size; i++){
        array[i] = rand() % 100;
    }
    printArray(array, size);
}
void swap(int array[], int size){
    int temp = 0;
    int position = 0;
    printArray(array, size);
    do {
        printf("Geben Sie eine Position ein: ");
        scanf("%d", &position);
    }while(position < 0 || position > size);
    if(position == size){
        temp = array[position];
        array[position] = array[0];
        array[0] = temp;
    }
    else
    {
        temp = array[position];
        array[position] = array[position+1];
        array[position+1] = temp;
    }
    printArray(array, size);
    return;
}
void minMax(int array[], int size){
    int min = array[0];
    int max = array[0];
    for (int i = 0; i <= size; i++){
        if (array[i] < min){
            min = array[i];
        }
        if (array[i] > max){
            max = array[i];
        }
    }
    printf("Minimum: %d \t Maximum: %d \n", min, max);
    printArray(array, size);
}

int main(void) {
    int array[SIZE] = {0};
    int size = SIZE - 1;
    char choice = 0;
    srand(time(NULL));

while(choice != '5'){
    choice = 0;
    system("cls");
    do {
        printf("\n1 - Ausgabe des Arrays\n2 - Bef\x81llen mit Zufallszahlen\n3 - Minimum und Maximum\n4 - Vertauschen\n5 - Beenden\n");
        choice = getch();
        printf("\n");
    }while(choice < '1' || choice > '5');
    
    switch (choice) {
            case '1':
                printArray(array, size);
                break;
            case '2':
                fillArray(array, size);
                break;
            case '3':
                minMax(array, size);
                break;
            case '4':
                swap(array, size);
                break;
            case '5':
                printf("\nProgramm wird beendet");
                return 0;
                break;
            default:
                printf("Falsche Eingabe");
                break;
        }

        printf("\nDr");
        printf("\x81");
        printf("cken Sie eine beliebige Taste um fortzufahren!\n5 um das Programm zu beenden!\n");
        choice = getche();
    }

    return 0;
}