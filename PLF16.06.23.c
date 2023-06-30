#include <stdio.h>
#include <stdint.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_TEXT_LENGTH 500
#define CAESAR_RANGE_START  ' '
#define CAESAR_RANGE_END    'z'


void CaesarCipher(char text[], int key);
char getMostCommonLetter(char text[]);
int getIntegerNumber(char userprompt[],int ug, int og);


int main(void)
{
    char menu_option;
    int key = 0;

    printf("\nCipher/Decipher\n");
    printf("~~~~~~~~~~~~~~~~~\n\n");
    char message[MAX_TEXT_LENGTH] = "Csjohfo!Tjf!efo!nju!bfvttfstufs!Wpstjdiu! v!hfojfttfoefo!Tbddibsje.Joupyjdbujpo.Joevdfs!jo!Tjdifsifju/!Tvdifo!Tjf!votfsf!bmt!Lboujofoebnf!hfubsouf!Voefsdpwfs.Bhfoujo!SPTJ!bvg!voe!tbhfo!Tjf! v!jis!ejf!DMBJN.Qisbtf;!(Tp!tvftt!xjf!ev-!lboo!epdi!lfjo!Lbsbnfmmcpocpo!tfjo/(!Cfxbisfo!Tjf!Svif!voe!wfsnfjefo!Tjf!kfhmjdif!xfjufsf!Qfstpofolpoubluf/";

    do
    {
        printf("1... Verschluesselte/Entschluesselte Nachricht anzeigen\n");
        printf("2... Manuelle Entschluesselung/Verschluesselung\n");
        printf("3... Automatische Entschluesselung\n");
        printf("4... Programm beenden\n\n");

        menu_option = getch();
        
        switch (menu_option)
        {
            case '1':
                printf("Aktuelle verschl\x81sselte/entschl\x81sselte Nachricht:\n%s\n", message);
                break;
            case '2':
                key = getIntegerNumber("Bitte geben Sie einen Schl\x81ssel ein (von -5 bis +5): ", -5, +5);
                CaesarCipher(message, key);
                printf("Aktuelle verschl\x81sselte/entschl\x81sselte Nachricht:\n%s\n", message);
                break;
            case '3':
                key = (getMostCommonLetter(message) - 'e') * (-1);
                CaesarCipher(message, key);
                printf("Aktuelle verschl\x81sselte/entschl\x81sselte Nachricht:\n%s\n", message);
                break;
            case '4':
                printf("Das Programm wird beendet!\nDanke, dass Sie das supertolle-ultrageheime Terminal verwendet haben ;)");
                return 0;
            default:
                printf("Falsche Eingabe!\n");
                break;
        }
        printf("\nWeiter mit einer beliebigen Taste!\n");
        getch();
        system("cls");

    } while (1);
    
}

int getIntegerNumber(char userprompt[],int ug, int og)
{
    int number = 0, retval = 0;
    do
    {
        printf("%s",userprompt);
        fflush(stdin);
        retval = scanf("%d",&number);
    } while (retval == 0 || number < ug || number > og);
    return number;
}

void CaesarCipher(char text[], int key)
{
    int i;
    for (i = 0; i < strlen(text); i++)
    {
        text[i] = text[i] + key;
        if (text[i] > CAESAR_RANGE_END)
        {
            text[i] = text[i] - (CAESAR_RANGE_END - CAESAR_RANGE_START + 1);
        }
        else if(text[i] < CAESAR_RANGE_START)
        {
            text[i] = text[i] + (CAESAR_RANGE_END - CAESAR_RANGE_START + 1);
        }
    }
}

char getMostCommonLetter(char text[])
{
    int i, j, count = 0, max_count = 0;
    char most_common_letter = 0;
    for (i = 0; i < strlen(text); i++)
    {
        count = 0;
        for (j = 0; j < strlen(text); j++)
        {
            if (text[i] == text[j])
            {
                count++;
            }
        }
        if (count > max_count)
        {
            max_count = count;
            most_common_letter = text[i];
        }
    }
    return most_common_letter;
}