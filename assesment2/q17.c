#include<stdio.h>

int main() {
    int n=5; //coloums
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            if (j == n-i+1) { //or if(i+j=n-1)
                printf("*");
            } else {
                printf("%d",j); //("%d",i)
            }
        }
        printf("\n");
    }
}
