#include <stdio.h>
#include <stdlib.h>

int minimum(char* values[], int numElements);

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        printf("Please enter integer arguments.\n");
        return 1;
    }
    else if (argc == 2)
    {
        printf("Min: %i\n", atoi(argv[1]));
        return 0;
    }

    printf("Min: %i\n", minimum(argv, argc));

    return 0;
}

int minimum(char* values[], int numElements)
{
    int minValue;

    minValue = atoi(values[1]);

    for (int i = 2; i < numElements; i++)
    {
        if (atoi(values[i]) < minValue)
        {
            minValue = atoi(values[i]);
        }
    }

    return minValue;
}
