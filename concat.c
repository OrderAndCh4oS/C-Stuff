#include <stdio.h>

void concat(char result[], const char str1[], const char str2[]);

int main(void)
{
    const char s1[] = {'h','e','y', ' '};
    const char s2[] = {'g', 'u', 'y', 's', '!'};
    char s3[9];

    concat(s3, s1, s2);
    for (int i = 0; i < 9; i++)
        printf("%c", s3[i]);

    printf("\n");
    return 0;
}

void concat(char result[], const char str1[], const char str2[])
{
    int i, j;

    for (i = 0; str1[i] != '\0'; i++)
    {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; j++)
    {
        result[i+j] = str2[j];
    }

    result[i+j] = '\0';
}
