#include <stdio.h>

#define ENTRIES 10

struct entry
{
    char word[15];
    char defination[50];
};


int compareStrings (const char s1[], const char s2[]);
int binaryLookup (const struct entry dictionary[], const char search[], const int entries);

int main(void)
{
    char word[ENTRIES];
    int entry;
    const struct entry dictionary[ENTRIES] = {
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

    printf("Enter a word: ");
    scanf("%14s", word);

    entry = binaryLookup(dictionary, word, ENTRIES);

    if (entry != -1)
        printf("\nThe Definition is: %s\n", dictionary[entry].defination);
    else
        printf("%s was not found.\n", word);

    return 0;
}

int compareStrings (const char s1[], const char s2[])
{
    int i = 0, compare;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;

    if(s1[i] < s2[i])
        compare = -1;
    else if (s1[i] == s2[i])
        compare = 0;
    else
        compare = 1;

    return compare;
}

int binaryLookup (const struct entry dictionary[], const char search[], const int entries){
    int low = 0, max = (entries - 1), mid, result;

    while(low <= max)
    {
        mid = (low + max) / 2;
        result = compareStrings(dictionary[mid].word, search);
        if (result == -1)
            low = mid + 1;
        else if (result == 1)
            max = mid - 1;
        else if (result == 0)
            return mid;
    }

    return -1;
}
