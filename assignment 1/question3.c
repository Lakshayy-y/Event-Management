#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,m1,m2;
    printf("enter all values");
    scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);

    m1==m2 ? printf("it's a straight line") :printf("not a straight line");


}