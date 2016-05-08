#include <stdio.h>
#include <stdbool.h>

struct entry
{
    char word[15];
    char defination[50];
};

bool equalStrings (const char s1[], const char s2[]);
int lookup (const struct entry dictionary[], const char search[], const int entries);

int main(void)
{
    const struct entry dictionary[10] = {
        {"Apple", "Crunchy fruit"},
        {"Banana", "Squishy fruit"},
        {"Carrot", "Orange veg"},
        {"Date", "Like a fig but different"},
        {"Eggplant", "It's an aubergine"},
        {"Fig", "Like a date int it"},
        {"Guava", "Some sort of fruit"},
        {"Honeydew", "Little melon like"},
        {"Iceberg", "It's a Lettuce"},
        {"Jalapeno", "Pickled chilli"},
    };

    char word[10];
    int entries = 10;
    int entry;

    printf("Enter a word: ");
    scanf("%14s", word);

    entry = lookup(dictionary, word, entries);

    if (entry != -1)
        printf("The Definition is: %s\n", dictionary[entry].defination);
    else
        printf("%s was not found.\n", word);

    return 0;
}

bool equalStrings (const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;

    if(s1[i] == s2[i])
        areEqual = true;
    else
        areEqual = false;

    return areEqual;
}

int lookup (const struct entry dictionary[], const char search[], const int entries){
    int i;

    for (i = 0; i < entries; i++)
        if (equalStrings(dictionary[i].word, search))
            return i;

    return -1;
}
