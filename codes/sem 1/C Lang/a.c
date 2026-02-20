// #include<string.h>
// #include<stdio.h>
// int main(){
// //      char firststr[]="hello";
// //     char secstr[]= "world";
// //     strcpy(secstr,firststr);
// //     puts(secstr);
    
//  }
// #include <stdio.h>
// int main() {
//     char str[100], temp;
//     int i, j = 0;
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     /* find length manually */
//     while(str[j] != '\0') {
//         j++;
//     }
//     j--;   // move to last character
//     /* reverse the string */
//     for(i = 0; i < j; i++, j--) {
//         temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }
//     printf("Reversed string: %s", str);
//  }
#include<stdio.h>
int main() {
    int arr[5]={2,3,4,5,6};
    int min=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d",min);
}

