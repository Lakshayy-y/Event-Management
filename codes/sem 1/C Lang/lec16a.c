#include<stdio.h>
int main(){
    int i;
    int arr[5]=(1,2,3,4,5);
    int maxi=arr[0];
    for(int i=0; i<5;i++);
    {
    if(arr[i]>maxi){
    maxi=arr[i];
    }
}
printf("%d",maxi);
}