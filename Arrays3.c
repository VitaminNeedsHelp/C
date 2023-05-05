#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 23

void printArray(int array[], int size){
    for (int i = 0; i <= size; i++){
        if (i == size){
            printf("%d", array[i]);
        }
        else{
        printf("%d, ", array[i]);
    }
    }
    printf("\n\n");
}

void fillArray(int array[], int size){
    for (int i = 0; i <= size; i++){
        array[i] = rand() % 100;
    }
}

void natuerlicheZahlen(int array[], int size){
    for (int i = 0; i <= size; i++){
        array[i] = i+1;
    }
    printf("Natuerliche Zahlen: ");
    printArray(array, size);
}

void quadratzahlen(int array[], int size){
    for (int i = 0; i <= size; i++){
        array[i] = (i+1)*(i+1);
    }
    printf("Quadratzahlen: ");
    printArray(array, size);
}

void fibonacci(int array[], int size){
    array[0] = 1;
    array[1] = 1;
    for (int i = 2; i <= size; i++){
        array[i] = array[i-1] + array[i-2];
    }
    printf("Fibonacci: ");
    printArray(array, size);
}

void zahlenfolge(int array[], int size){
    for (int i = 0; i <= size; i++){
        array[i] = 6 + i*4;
    }
    printf("Zahlenfolge: ");
    printArray(array, size);
}

void teilbar(int array[], int size){
    int counter = 0;
    for (int i = 0; i <= size; i++){
        if (counter == 10){
            printf("\n");
            counter = 0;
        }
        if (i % 3 == 0 || i % 5 == 0){
            array[counter] = i;
            counter++;
        }
    }
    printf("Teilbar: ");
    printArray(array, size);
}

int main(){
    srand(time(NULL));
    int array[SIZE];
    fillArray(array, SIZE);
    natuerlicheZahlen(array, SIZE);
    quadratzahlen(array, SIZE);
    fibonacci(array, SIZE);
    zahlenfolge(array, SIZE);
    teilbar(array, SIZE);
    return 0;
}