#include <iostream>
#include <string.h>

using namespace std;

/*
In a proposition inverse the words that has the max lenght
*/

int ReturnMaxWordLenght(char proposition[])
{
    int maxWordLenght = 0;
    int wordLenght;

    for (int i = 0; i < strlen(proposition); i++)
    {
        wordLenght = 0;

        while (isalpha(proposition[i]))
        {
            wordLenght++;
            i++;
        }

        if (wordLenght > maxWordLenght)
        {
            maxWordLenght = wordLenght;
        }
    }

    return maxWordLenght;
}

void ReflectedMaxWords(char proposition[])
{
    int wordLenght;
    int maxWordLenght = ReturnMaxWordLenght(proposition);
    char characterForSwitch;

    for (int i = 0; i < strlen(proposition); i++)
    {
        wordLenght = 0;

        while (isalpha(proposition[i]))
        {
            wordLenght++;
            i++;
        }

        if (wordLenght == maxWordLenght)
            for (int j = 1; j <= maxWordLenght / 2; j++)
            {
                characterForSwitch = proposition[i - j];
                proposition[i - j] = proposition[i - wordLenght - 1 + j];
                proposition[i - wordLenght - 1 + j] = characterForSwitch;
            }
    }
}

int main()
{
    char proposition[100];
    cin.getline(proposition, 99);
    ReflectedMaxWords(proposition);
    cout << proposition;

    return 0;
}
