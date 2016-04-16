#include <stdio.h>

void addBinaryStrings(const int b1[], const int b2[], int n);
int main()
{
    const int b1[5] = {1, 1, 0, 1, 1};
    const int b2[5] = {0, 0, 1, 0, 1};
    addBinaryStrings(b1, b2, 5);
    return 0;
}

void addBinaryStrings(const int b1[], const int b2[], int n)
{
    int output[n+1],
        carryDigit = 0,
        writeDigit,
        k1,
        k2;

    for (int i = (n-1); i >= 0; i--)
    {
        k1 = b1[i];
        k2 = b2[i];

        if (k1 == k2)
        {
            writeDigit = carryDigit;
            carryDigit = k1;
        }
        else
        {
            if (carryDigit == 1)
                writeDigit = 0;
            else
                writeDigit = 1;
        }
        output[i] = writeDigit;
    }

    if (carryDigit == 1)
    {
        output[n] = 1;
        n += 1;
    }

    for(int i = (n-1); i >= 0; i--)
    {
        printf("%i", output[i]);
    }
    printf("\n");
}
