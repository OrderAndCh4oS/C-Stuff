#include <stdio.h>
#include <stdbool.h>

bool compare(const char str1[], const char str2[]);

int main(void)
{
    const char str1[] = "Test1";
    const char str2[] = "Test2";
    const char str3[] = "Test2";

    printf("%i\n", compare(str1, str2));
    printf("%i\n", compare(str2, str3));

    return 0;
}


bool compare(const char str1[], const char str2[])
{
    int i = 0;

    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
        i++;
    if (str1[i] == '\0' && str2[i] == '\0')
        return true;
    else
        return false;
}
