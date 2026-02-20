#include<stdio.h>
int main()
{
    int m;
    printf("enter m");
    scanf("%d",&m);

    for(int i=m;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
           printf("\n");
        
        
        
    }
}

