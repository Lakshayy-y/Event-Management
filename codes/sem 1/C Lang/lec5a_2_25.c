#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    int sum= x+y+z;
    if(sum>1000)
    {
        printf("the sum is greater then 1000");
    }
    else 
    { printf("the sum is smaller then 1000 ");
    }
}