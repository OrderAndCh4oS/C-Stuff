#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int* arr;
    arr = malloc(sizeof(int)*3);
    if(arr == NULL) {
        return 1;
    }
    *(arr+0) = 1;
    *(arr+1) = 129304;
    *(arr+2) = 999;
    *(arr+3) = 8888;
    printf("%i\n", arr[3]);
    free(arr);
    return 0;
}
