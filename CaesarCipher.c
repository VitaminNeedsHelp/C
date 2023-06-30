#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encryptCaesarCipher(char text[], int key);
int countLetter(char text[]);

int main(void)
{
    char text[100] = {0};
    int key, letter;
    
    printf("Bitte geben Sie einen Text ein: ");
    scanf("%[^\n]99s", text);

    printf("Bitte geben Sie einen Key ein: ");
    scanf("%d", &key);

    letter = countLetter(text);
    encryptCaesarCipher(text, key);

    printf("Haeufigkeit des Buchstaben e: %d", letter);
    printf("\nDer verschl\x81sselte Text lautet: %s", text);

    return 0;
}

void encryptCaesarCipher(char text[], int key)
{
    int i;
    for (i = 0; i < strlen(text); i++)
    {
        text[i] = text[i] + key;
    if (text[i] > 122)
    {
        text[i] = text[i] - 91;
    }
    else if(text[i] < 32)
    {
        text[i] = text[i] + 91;
    }
    }
}

int countLetter(char text[])
{
    int i, count = 0;
    for (i = 0; i < strlen(text); i++)
    {
        if (text[i] == 'e' || text[i] == 'E')
        {
            count++;
        }
    }
    return count;
}