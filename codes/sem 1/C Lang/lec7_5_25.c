#include<stdio.h>
int main
()
{
    int a1,a2,a3,b1,b2,b3,slope1,slope2;
    printf("enter the value");
    scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3);
    slope1=(b2-b1)/(a2-a1);
    slope2=(b3-b2)/(a3-a2);

    slope1==slope2 ? printf("it's a straight line") :printf("not a straight line");
    
    

}