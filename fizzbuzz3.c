#include <stdio.h>
int main(void)
{
    char fb[] = {"fizz", "buzz"};
    int d[] = {3, 5};
    for(int i=1;i<101;i++)
    {
        for (int j=0;j<2;j++)
            printf("%s",i%d[j]==0?fb[j]:(char)i);
        printf("\n");
    }
    return 0;
}
