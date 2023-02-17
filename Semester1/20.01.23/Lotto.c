#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int bubble[6]; // create an array with 6 positions
    int inner,outer,temp,x,e;

    srand((unsigned)time(NULL)); // generate random numbers
    // srand is a function which initializes the random number generator used by the function rand
    // srand takes one argument: an unsigned integer, which is used as a seed for the random number generator
    
    for(x=0;x<7;x++) // loop from 0 to 7 (7 times)
    {
        bubble[x] = (rand() % 44 + 1 - 1) + 1; // generate random numbers between 1 and 45
        bubble[x] = (bubble[x] % 100)+1; // generate random numbers between 1 and 100
        for(inner=0;inner<x;inner++) // loop from 0 to x (x times)
        {
            if(bubble[x] == bubble[inner]) // check if the value at bubble[x] is equal to the value at bubble[inner]
            {
                x--; // if so, decrease x by 1
                break; // and break out of the loop
            }
        }
    }

    e = bubble[6]; // set e to the value at bubble[6]

    for(outer=0;outer<6-1;outer++) // loop from 0 to 5 (6 times)
    {
        for(inner=outer+1;inner<6;inner++) // loop from 1 to 6 (6 times)
        {
            if(bubble[outer] > bubble[inner]) // check if the value at bubble[outer] is greater than the value at bubble[inner]
            {
                temp=bubble[outer]; // if so, set temp to the value at bubble[outer]
                bubble[outer] = bubble[inner]; // set the value at bubble[outer] to the value at bubble[inner]
                bubble[inner] = temp; // set the value at bubble[inner] to temp
            }
        }
    }

    puts("Lottozahlen 6 aus 45 (sortiert): "); // print a string
    for(x=0;x<6;x++) // loop from 0 to 5 (6 times)
        printf("%d\t",bubble[x]); // print the value at bubble[x]
    putchar('\n'); // print a new line

    printf("Zusatzzahl: %d",e); // print a string with the value of e
}