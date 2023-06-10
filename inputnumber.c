#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int getIntegerNumber(char userprompt[],int ug,int og);
double getDoubleNumber(char userprompt[], double ug, double og);

int main(void)
{
    int i = getIntegerNumber("Bitte geben Sie eine Zahl zwischen 1 und 10 ein: ",1,10);
    printf("Die Zahl ist: %d\n",i);
    double d = getDoubleNumber("Bitte geben Sie eine Zahl zwischen 1 und 10 ein: ",1,10);
    printf("Die Zahl ist: %.2lf\n",d);
    return 0;
}

int getIntegerNumber(char userprompt[],int ug,int og)
{
    int i;
    bool valid = false;
    while(!valid)
    {
        printf("%s",userprompt);
        if(scanf("%d",&i) > 0)
        {
            if(i >= ug && i <= og)
            {
                valid = true;
            }
        }
        while(getchar() != '\n');
    }
    return i;
}

double getDoubleNumber(char userprompt[], double ug, double og)
{
    double d;
    bool valid = false;
    while(!valid)
    {
        printf("%s",userprompt);
        if(scanf("%lf",&d) > 0)
        {
            if(d >= ug && d <= og)
            {
                valid = true;
            }
        }
        while(getchar() != '\n');
    }
    return d;
}

