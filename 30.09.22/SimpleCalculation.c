#include <stdio.h>
int main (void)
{
    unsigned char number1 = 90 , number2 = 190 ;
    unsigned char result_sum ;
    float result_subtraction ;

    printf ("Simple Calculations:\n\n" ) ;
    printf ("Summand 1 = %d\n", number1 ) ;
    printf ("Summand 2 = %d\n", number2 ) ;

    result_sum = number1 + number2 ;
    printf ("Result %d + %d = %d\n", number1, number2, result_sum) ;

    result_subtraction = number1 - number2 ;
    printf ("Result of %d - %d = %d\n", number1, number2, result_subtraction) ;

    return 0;
}