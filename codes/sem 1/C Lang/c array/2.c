#include<stdio.h>
int main()     
{
    int n;
    scanf("%d",n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ap=(n*(n+1)/2);
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];    
    }
    int sub;
    sub=sub-ap;
    printf("%d",sub);
    }   
