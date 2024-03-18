#include <stdio.h>
#include <string.h>
void countVowelsConsonants(const char *str, int *vowels, int *consonants)
{
    // Write Solution Code
    int v = 0, c = 0;
    for (int i = 0; i < (strlen(str)); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            v++;
        }
        else c++;
    }
    *vowels = v;
    *consonants = c;
}
int main()
{
    char inputString[99];
    scanf("%s", inputString);

    int numVowels, numConsonants;
    countVowelsConsonants(inputString, &numVowels, &numConsonants);

    printf("Vowels: %d\n", numVowels);
    printf("Consonants: %d\n", numConsonants);

    return 0;
}
