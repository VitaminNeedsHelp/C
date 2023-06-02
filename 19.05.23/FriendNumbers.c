//A pair of friendly numbers is a pair of different natural numbers, where each number is equal to the sum of the proper divisors of the other number.
//Create a function for the verification and return the value 1 if it is a pair of friendly numbers, otherwise return the value 0. Similarly, a separate function should be created to calculate the sum of all divisors of a number, which should return the corresponding sum.

#include <stdio.h>

int isFriendlyNumber(int number1, int number2);
int sumOfDivisors(int number);

int main(void)
{
    int number1, number2;
    printf("Please enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    if (isFriendlyNumber(number1, number2))
    {
        printf("%d and %d are friendly numbers.", number1, number2);
    }
    else
    {
        printf("%d and %d are not friendly numbers.", number1, number2);
    }
    return 0;
}

int isFriendlyNumber(int number1, int number2)
{
    return sumOfDivisors(number1) == number2 && sumOfDivisors(number2) == number1;
}

int sumOfDivisors(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
