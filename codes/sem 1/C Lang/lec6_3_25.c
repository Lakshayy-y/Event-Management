#include<stdio.h>
int main()
{
    int x;
    printf("enter x");
    scanf("%d",&x);
    

    if(x%2==0 || x%4==0 || x%6==0)
    {
        printf("the no. is divisble by 2,4 and 6");

    }
    else
    {
        printf("the no. is not divisble by 2,4 and 6");
    
    }
}