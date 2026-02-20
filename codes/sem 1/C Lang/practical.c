#include<stdio.h>
int main(){
    int i,n,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        temp=arr[n-i-1];
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}