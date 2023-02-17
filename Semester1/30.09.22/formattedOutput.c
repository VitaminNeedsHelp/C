#include <stdio.h>
int main()
{
   int n = 3 ;
   float x = 1.142342346 ;

    printf ("Integer Example 1: %8d,\n", n);
    printf ("Integer Example 2: %-8d,\n", n);
    printf ("Integer Example 3: %08d,\n", n);               
    printf ("Integer Example 4: %-+8d,\n", n);                          
    printf ("Integer Example 5: %-+8d,\n\n", n);                         
                                
    printf ("Float Example 1: %10.4f,\n", x);
    printf ("Float Example 2: %-10.2f,\n", x);
    printf ("Float Example 3: %010.3f,\n", x);
    printf ("Float Example 4: %0+10.3f,\n", x);

    printf ("Zahlensysteme: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
    printf ("Variable Feldbreite: %*d \n", 20, 10);
    printf ("Textausgabe: %s \n" , "Beispieltext");

    return 0 ;
}