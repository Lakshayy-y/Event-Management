#include<stdio.h>
int main()
{
    for(int i=0; i<=1000; i++)
    {
        printf("from for loop");
        printf("%d\n",i);
    }
       printf("from while loop");
       int i=0;
       while(i<1000)
       {
        printf("%d\n",i);
        i++;
       }


}