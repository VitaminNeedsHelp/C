#include <stdio.h>
#include <math.h>

int isNivenNumber();

int main(void)
{
    isNivenNumber();
    return 0;
}

int isNivenNumber()
{
    for (int i = 100; i < 1000; i++)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (i % sum == 0)
        {
            printf("%d is a Niven number.\n", i);
        }
    }
}
