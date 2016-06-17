#include <stdio.h>

int strLength(const char string[]);

int main(void)
{
    const char word1[] = {'L', 'o', 'u', 'i', 'e', '\0'};
    const char word2[] = "Mary";
    const char word3[] = { "Spud" };
    printf("%i, %i, %i\n", strLength(word1), strLength(word2), strLength(word3));
    return 0;
}

int strLength(const char string[])
{
    int count = 0;
    while(string[count] != '\0')
    {
        count++;
    }
    return count;
}
