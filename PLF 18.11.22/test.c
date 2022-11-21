#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

  int wahl = 0;
  int n1, n2, sum;
  char op;

  int zahlganz = 0, zahlganzsave = 0, leftz = 0, rightz = 0, leftzsave = 0, rightzsave = 0, leftflip = 0, rightflip = 0;

  printf("Programm w\x84hlen:\n1.Summe\n2.Vampirzahlen\n3.Beenden\nIhre Wahl [1-3]: ");
  fflush(stdin);
  scanf("%d", &wahl);

  if (wahl == 1)
  {
    printf("Enter summand 1: ");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Enter summand 2: ");
    fflush(stdin);
    scanf("%d", &n2);

    if (n2 > 0)
    {
      op = '+';
    }

    sum = n1 + n2;

    printf("\nCalculation\n%11d\n%5c%d\n-----------\n%11d", n1, op, n2, sum);
  }
  else if (wahl == 2)
  {
    printf("Please enter a 4-digit number: ");
    fflush(stdin);
    scanf("%d", &zahlganz);
    zahlganzsave = zahlganz;

    rightz += (zahlganz % 10);
    zahlganz /= 10;
    rightz += (zahlganz % 10) * 10;
    zahlganz /= 10;

    leftz = zahlganz;
    zahlganz = zahlganzsave;

    rightzsave = rightz;
    leftzsave = leftz;
    

    leftflip += (leftz % 10) * 10;
    leftz /= 10;
    leftflip += (leftz % 10);
    leftz /= 10;
    rightflip += (rightz % 10) * 10;
    rightz /= 10;
    rightflip += (rightz % 10);
    rightz /= 10;

    if (leftzsave * rightzsave == zahlganzsave)
    {
      printf("The number %d is a valid vampire number!", zahlganzsave);
    }
    else if (leftflip * rightzsave == zahlganzsave)
    {
      printf("The number %d is a valid vampire number!", zahlganzsave);
    }
    else if (leftzsave * rightflip == zahlganzsave)
    {
      printf("The number %d is a valid vampire number!", zahlganzsave);
    }
    else if (leftflip * rightflip == zahlganzsave)
    {
      printf("The number %d is a valid vampire number!", zahlganzsave);
    }
    else
    {
      printf("The number %d is not a valid vampire number!", zahlganzsave);
    }

    printf("\nThe square root of %d is %.2lf.", zahlganzsave, sqrt(zahlganzsave));
  }
  else if (wahl == 3)
  {
    printf("Program beendet!");
    return 0;
  }
}