#include<stdio.h>
int main()
{ 
    printf("from for loop");
    for(int i=0; i<=100;i++)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
    } 
    printf("from while loop");
    int i=0;
    while(i<=100)

    { 
        if(i%2==1)
        {
            printf("%d\n",i);
        }
        i++;

        
    }

}
