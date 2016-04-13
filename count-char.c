#include <stdio.h>

int stringLng(const char string[]);

int main(void)
{
    const char word1[] = {'L', 'o', 'u', 'i', 'e', '\0'};
    const char word2[] = {'M', 'a', 'r', 'y', '\0'};
    const char word3[] = {'S', 'p', 'u', 'd', '\0'};
    printf("%i, %i, %i\n", stringLng(word1), stringLng(word2), stringLng(word3));
    return 0;
}

int stringLng(const char string[])
{
    int count = 0;
    while(string[count] != '\0')
    {
        count++;
    }
    return count;
}
