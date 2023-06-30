//Erstelle ein Array mit 20 ganzzahligen Zufallszahlen im Bereich 1 - 100

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define ARRAY_SIZE 20

void fillArrayRand(int array[])     //Funktion um das Array mit Zufallszahlen im Bereich 1 - 100 zu füllen
{
    srand(time(NULL));
    for(int i=0;i<ARRAY_SIZE;i++)
    {
        array[i]=rand()%100+1;
    }
}

void printArray(int array[])        //Funktion um das Array auf der Konsole auszugeben
{
    printf("Print  Randomarray:\n");
    for(int i=0;i<ARRAY_SIZE;i++)
    {
        printf("%3d ",array[i]);
    }
    printf("\n");
}

int checkNumbers(int array[])       //Funktion um gerade bzw. ungerade Zahlen zu erkennen
{
    int even=0;
    int odd=0;
    for(int i=0;i<ARRAY_SIZE;i++)
    {
        if(array[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Amount of even numbers: %3d\n",even);
    printf("Amount of odd numbers: %4d\n",odd);
    return 0;
}

int main(void)
{
int intArray[ARRAY_SIZE]={0};

fillArrayRand(intArray);
printArray(intArray);
checkNumbers(intArray);
}