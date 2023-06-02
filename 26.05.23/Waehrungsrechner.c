#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

char printMenu();
void printResult(char currency, double amount);

int main(void)
{
    char currency;
    double amount;
    currency = printMenu();
    if (currency != 'x')
    {
        printf("\n\nPlease enter the amount: ");
        scanf("%lf", &amount);
    }	
    printResult(currency, amount);
    return 0;
}

char printMenu()
{
    char currency;
    system("cls");
    printf("-------------------------------\n\n");
    printf(" __          __        _                                              _                     \n");
    printf(" \\ \\        / /       | |                                            | |                    \n");
    printf("  \\ \\  /\\  / /_ _  ___| |__  _ __ _   _ _ __   __ _ ___ _ __ ___  ___| |__  _ __   ___ _ __ \n");
    printf("   \\ \\/  \\/ / _` |/ _ \\ '_ \\| '__| | | | '_ \\ / _` / __| '__/ _ \\/ __| '_ \\| '_ \\ / _ \\ '__|\n");
    printf("    \\  /\\  / (_| |  __/ | | | |  | |_| | | | | (_| \\__ \\ | |  __/ (__| | | | | | |  __/ |   \n");
    printf("     \\/  \\/ \\__,_|\\___|_| |_|_|   \\__,_|_| |_|\\__, |___/_|  \\___|\\___|_| |_|_| |_|\\___|_|   \n");
    printf("                                               __/ |                                        \n");
    printf("                                              |___/                                         \n");                                                                                                                              
    printf("W\x84hlen Sie eine Aktion:\n");
    printf("[a] EUR->USD\n");
    printf("[b] USD->EUR\n");
    printf("[c] EUR->HUF\n");
    printf("[d] HUF->EUR\n");
    printf("[e] EUR->SEK\n");
    printf("[f] SEK->EUR\n");
    printf("[x] Beenden\n");
    printf("Auswahl: ");
    fflush(stdin);
    currency = getche();
    return currency;
}

void printResult(char currency, double amount)
{
    switch (currency)
    {
    case 'a':
        printf("W\x84hrungsumrechnung EUR->USD\n\n");
        printf("%.2lf EUR sind %.2lf USD", amount, amount * 1.07);
        break;
    case 'b':
        printf("W\x84hrungsumrechnung USD->EUR\n\n");
        printf("%.2lf USD sind %.2lf EUR", amount, amount * 0.93);
        break;
    case 'c':
        printf("W\x84hrungsumrechnung USD->HUF\n\n");
        printf("%.2lf EUR sind %.2lf HUF", amount, amount * 372.01);
        break;
    case 'd':
        printf("W\x84hrungsumrechnung HUF->EUR\n\n");
        printf("%.2lf HUF sind %.2lf EUR", amount, amount * 0.0027);
        break;
    case 'e':
        printf("W\x84hrungsumrechnung EUR->SEK\n\n");
        printf("%.2lf EUR sind %.2lf SEK", amount, amount * 11.55);
        break;
    case 'f':
        printf("W\x84hrungsumrechnung SEK->EUR\n\n");
        printf("%.2lf SEK sind %.2lf EUR", amount, amount * 0.087);
        break;
    case 'x':
        printf("\nProgramm wird beendet... Wiederschaun und reingehaun");
        exit(0);
    default:
        printf("Ungueltige Eingabe!");
        break;
    }
}