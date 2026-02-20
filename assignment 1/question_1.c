#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    
    if(b==0)
    {
        printf("error:not divisble.\n");
    }
    if(a%b==0 && b%a==0) {
    int remainder_ab = a % b;
    printf("a is divisible by b AND b is divisible by a.\n");
    printf("Remainder of %d divided by %d is: %d\n", a, b, remainder_ab);
    }
    else
    {
        printf("a is not divisble by b OR b is divisible by a.\n");
    }
    
    

}