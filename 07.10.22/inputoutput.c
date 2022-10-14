#include <stdio.h>
int main()
{
    int a = 0;
    float b = 0;
    double c = 0;
    char d = 0;
    char e[80];

    printf("Input: \n------"); 

    printf("\nEnter an integer: ");
    fflush(stdin);
    scanf("%d", &a);
    printf("Enter a float: ");
    fflush(stdin);
    scanf("%f", &b);
    printf("Enter a double: ");
    fflush(stdin);
    scanf("%lf", &c);
    printf("Enter a Char: ");
    fflush(stdin);
    d = getchar();
    printf("Enter a string: ");
    fflush(stdin);
    scanf("%s", e);

    printf("\nAusgabe: \n--------");
    printf("\nInt: %10d", a);
    printf("\nFloat: %8.2f", b);
    printf("\nDouble: %7.2lf", c);
    printf("\nChar: %9c", d);
    printf("\nString: %7.6s", e);

}