#include <stdio.h>
#include <math.h>

int isMuenchhausenNumber(int number);

int main(void)
{
    int number;
    printf("Please enter a number: ");
    fflush(stdin);
    scanf("%d", &number);
    if (isMuenchhausenNumber(number))
    {
        printf("%d is a Muenchhausen number.", number);
    }
    else
    {
        printf("%d is not a Muenchhausen number.", number);
    }
    return 0;
}

int isMuenchhausenNumber(int number)
{
    int sum = 0;
    int temp = number, minusflag = 0;
    while (temp != 0)
    {
        sum += pow(temp % 10, temp % 10);
        temp /= 10;
        if(temp % 10 == 0)minusflag=1;
    }
    if(minusflag)sum-=1;
    return sum == number;
}