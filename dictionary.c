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

}

bool equalStrings (const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual;

    while (s1[i] != '\0' && s2 != '\0')
    {
        if(s1[i] == s2[i])
            areEqual = true;
        else
            areEqual = false;
    }
    return areEqual;
}

int lookup (const struct entry dictionary[], const char search[], const int entries){

}
