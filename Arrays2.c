#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX_STUDENTS 36
#define MIN_STUDENTS 12
#define MAX_GRADE 5
#define MIN_GRADE 1

void printArray(int array[], int size){
    printf("Noten: ");
    for (int i = 0; i <= size; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n");
}

void fillArray(int array[], int size){
    for (int i = 0; i <= size; i++){
        array[i] = rand() % MAX_GRADE + MIN_GRADE;
    }
    printArray(array, size);
}

void average(int array[], int size){
    int sum = 0;
    for (int i = 0; i <= size; i++){
        sum += array[i];
    }
    printf("Durchschnitt: %.2f \n\n", (float)sum/(size+1));
}

void countGrades(int array[], int size){
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    for (int i = 0; i <= size; i++){
        if (array[i] == 1){
            count1++;
        }
        if (array[i] == 2){
            count2++;
        }
        if (array[i] == 3){
            count3++;
        }
        if (array[i] == 4){
            count4++;
        }
        if (array[i] == 5){
            count5++;
        }
    }
    printf("Anzahl der 1er: %d \n", count1);
    printf("Anzahl der 2er: %d \n", count2);
    printf("Anzahl der 3er: %d \n", count3);
    printf("Anzahl der 4er: %d \n", count4);
    printf("Anzahl der 5er: %d \n", count5);
}

int main(){
    srand(time(NULL));
    int grade_array[MAX_STUDENTS];
    int size = 0;
    do {
        printf("Geben Sie die Anzahl der Schueler ein: ");
        scanf("%d", &size);
    }while(size < MIN_STUDENTS || size > MAX_STUDENTS);
    fillArray(grade_array, size);
    average(grade_array, size);
    countGrades(grade_array, size);
    return 0;
}