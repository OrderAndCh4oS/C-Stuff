#include <stdio.h>

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;

void getNumberAndBase(void);
void convertNumber(void);
void displayConvertedNumber(void);

int main(void)
{
    getNumberAndBase();
    convertNumber();
    displayConvertedNumber();

    return 0;
}

void getNumberAndBase(void)
{
    printf("Number to Convert: ");
    scanf("%li", &numberToConvert);
    do
    {
        printf("Base: ");
        scanf("%i", &base);
    } while (base > 16 || base < 2 );
}

void convertNumber(void)
{
    do
    {
        convertedNumber[digit] = numberToConvert % base;
        ++digit;
        numberToConvert /= base;
    } while (numberToConvert);
}

void displayConvertedNumber(void)
{
    const char baseDigits[] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'
    };

    int nextDigit;

    printf("Converted Number: ");

    for (--digit; digit >=0; --digit)
    {
        nextDigit = convertedNumber[digit];
        printf("%c", baseDigits[nextDigit]);
    }
        printf("\n");
}

