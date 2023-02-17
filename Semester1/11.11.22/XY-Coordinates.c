/*  # programme - PROJECT_NAME
    DD.MM.YYY
    2BHME
    Lukas Bayer
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

   int x,y ;

    printf("Geben Sie die X-Koordinate ein: ");
    scanf("%d", &x);
    printf("Geben Sie die Y-Koordinate ein: ");
    scanf("%d", &y);

    if(x>0 && y>0){
        printf("der Punkt liegt im Quadrant 1");
        }
    else if(x<0 && y>0) {
        printf("der Punkt liegt im Quadrant 2");
        }
    else if(x<0 && y<0) {
        printf("der Punkt liegt im dritten Quadrant");
        }
    else if(x>0 && y<0) {
        printf("der Punkt liegt im vierten Quadrant");
        }
    else if(x==0 && y==0) {
        printf("der Punkt liegt auf dem Nullpunkt");
        }
    else if(x==0 && y!=0){
        printf("der Punkt liegt auf der x Achse");
        }
    else if(x!=0 && y==0){
        printf("der Punkt liegt auf der y Achse");
        }
    else{
        printf("Fehlerhafte Eingabe. Balls");
        }
    

    return 0;
}
