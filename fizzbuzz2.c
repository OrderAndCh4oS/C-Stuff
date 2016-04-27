#include <stdio.h>

const char* fb[] = {"fizz", "buzz"};
const int divide[2] = {3, 5};

void fizzbuzz(int i)
{
    int b = 1;
    for (int j = 0; j < 2; j++) {
        if(i % divide[j] == 0)
        {
            printf("%s", fb[j]);
            b = 0;
        }
    }
    if (b) {
        printf("%i", i);
    }
    printf("\n");
}

int main(void)
{
    for(int i = 1; i <= 100; i++)
    {
        fizzbuzz(i);
    }
    return 0;
}


