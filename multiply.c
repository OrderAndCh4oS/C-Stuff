#include <stdio.h>
#include <stdlib.h>

float* multiplyBy2 (float tmp[], char* array[], int n);

int main (int argc, char* argv[])
{
    int size = argc - 1;
    float array[size];
    float *pArray;
    if (argc == 1) {
        printf("Please enter a some floating point numbers");
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        printf("%.2f\n", atof(argv[i]));
    }

    printf("Multiplying...\n");
    pArray = multiplyBy2(array, argv, size);

    for (int i = 0; i < size; i++)
    {
        printf("%.2f\n", *(pArray + i));
    }

    return 0;
}

float* multiplyBy2 (float tmp[], char* array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tmp[i] = atof(array[i+1]) * 2;
    }
    return tmp;
}
