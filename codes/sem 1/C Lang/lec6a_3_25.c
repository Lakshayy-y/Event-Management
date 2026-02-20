#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the value of three sides");
    scanf("%d %d %d",&x,&y,&z);

    if(x+y>z || y+z>x || x+z>y)
    {
        printf("the triangle is formed");
    }

    else{
        printf("the triangle is not formed");
    }

} 