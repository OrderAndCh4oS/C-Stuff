#include <stdio.h>

void readline(char buffer[81]);

int main(void) {
    char line[81];

    readline(line);
    printf("%s\n", line);

    return 0;
}

void readline(char buffer[81])
{
    char character;
    int i = 0;

    do
    {
        character = getchar();
        buffer[i] = character;
        i++;
    } while(character != '\n');
    buffer[i - 1] = '\0';
}
