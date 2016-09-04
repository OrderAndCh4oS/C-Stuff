#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* appendChar(char* string, char character);

int main(void)
{
    char* word = NULL;
    word = appendChar(word, 'c');
    word = appendChar(word, 'a');
    word = appendChar(word, 't');
    printf("%s\n", word);
    free(word);
    return 0;
}

char* appendChar(char* string, char character)
{
    int length = 0;
    if(string == NULL)
    {
        string = malloc(sizeof(char)*2);
    } else {
        length = strlen(string);
        string = realloc(string, sizeof(char)*(length+2));
    }
    if(string != NULL)
    {
        string[length] = character;
        string[length+1] = '\0';
    }
    return string;
}
