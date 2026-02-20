//2d array
#include<stdio.h> //minimum
int main(){
    int arr[2][2]={{3,4},{7,8}};
    int mini=arr[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(mini>arr[i][j]){
                mini=arr[i][j];
            }
        }
    }
      printf("%d",mini);
}