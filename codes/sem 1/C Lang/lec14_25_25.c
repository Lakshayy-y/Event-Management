#include<stdio.h> // return type Function
int add (int a,int b){
    int c=a+b;
    return c;
}

    int main(){
        int a,b;
        scanf("%d%d",&a,&b);
        int c= add(a,b);
        printf("the sum is %d",c);
    }

