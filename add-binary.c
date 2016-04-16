#include <stdio.h>

void addBinaryStrings(const int b1[4], const int b2[4]);
int main()
{
    const int b1[5] = {1, 0, 1, 1};
    const int b2[5] = {0, 1, 0, 1};
    addBinaryStrings(b1, b2);
    return 0;
}

void addBinaryStrings(const int b1[4], const int b2[4])
{
    int output[6];
    int carryDigit = 0, writeDigit, k1, k2;

    for (int i = 3; i >= 0; i--)
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
    int x = 3;
    if (carryDigit == 1)
    {
        x = 4;
        output[5] = 1;
    }

    for(int i = x; i >= 0; i--)
    {
        printf("%i", output[i]);
    }
    printf("\n");
}

