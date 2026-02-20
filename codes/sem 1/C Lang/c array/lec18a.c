//2d array
#include<stdio.h> //maximum
int main(){
    int arr[2][2]={{3,4},{7,8}};
    int maxi=arr[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(maxi<arr[i][j]){
                maxi=arr[i][j];
            }
        }
    }
      printf("%d",maxi);
}