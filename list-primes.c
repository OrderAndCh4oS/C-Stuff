#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define MAX 1000

void primeList(int n, int nList[], int pList[]);

int main(void)
{
    int n = 1000;
    if(n <= MAX){
        int nList[n - 1], pList[MAX/2] = {};
        for (int i = 0; i < (n - 1); i++)
        {
            nList[i] = n - i;
        }
        primeList(n, nList, pList);
        for(int i = 0; pList[i] != 0; i++)
        {
            printf("%i\n", pList[i]);
        }
    } else {
        printf("n to high.\n");
        return 1;
    }
    return 0;
}

void primeList(int n, int nList[], int pList[])
{
    int prime, count = 0;
    bool isPrime = true;

    for (int i = 0; i < (n - 1); i++)
    {
        prime = nList[i];
        for(int j = i + 1; j < (n - 1); j++)
        {
            if ((prime % nList[j]) == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            pList[count] = prime;
            count++;
        }
        isPrime = true;
    }
}
