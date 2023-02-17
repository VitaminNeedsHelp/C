#include <stdio.h>

int main()
{
    char vor[20], nach[20], tel[20];
    int alt = 0;
    double height = 0.00;

    printf("Dateneingabe:\n-------------");

    printf("\nVorname eingeben: ");
    fflush(stdin);
    scanf("%s", vor);
    printf("Nachname eingeben: ");
    fflush(stdin);
    scanf("%s", nach);
    printf("Alter eingeben: ");
    fflush(stdin);
    scanf("%d", &alt);
    printf("Gr\x94sse eingeben: ");
    fflush(stdin);
    scanf("%lf", &height);
    printf("Telefonnummer eingeben: ");
    fflush(stdin);
    scanf("%s", tel);

    printf("\n\nAusgabeliste:\n-------------");

    printf("\nName:%7s  %7s", vor, nach);
    printf("\nAlter:%9d Jahre", alt);
    printf("\nGr\x94sse:%13.2lfm", height);
    printf("\nTel:%-s", tel);

    printf("\n\nAusgabesatz:\n-------------\n");
    printf("%s %s ist %d Jahre alt, %.2lf gro\xE1 und hat %s als Telefonnummer.", vor, nach, alt, height, tel);
}