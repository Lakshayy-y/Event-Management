#include <stdio.h>
int main()
{
    int num = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1)
            {
                printf("%d", num);
                num++;
            }
            else if(i==3){
                printf("%d",num);
                num++;
            }
            else{
                printf("*");
            }
        }
        printf("\n");
}
}