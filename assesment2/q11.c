#include <stdio.h>
int main()
{
    int num = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d", num);
            }
            else if (i == j)
            {
                num++;
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}