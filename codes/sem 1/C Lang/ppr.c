#include<stdio.h>//string
#include<string.h>
void slice(char str[], int n, int m){
        char newstr[100];
        int j=0;
        for(int i=n;i<=m;i++, j++){
            newstr[j]=str[i];
        }
        newstr[j]='\0';
        puts(newstr); 
    }
int main(){
    // char str[100];
    // fgets(str,100,stdin);
    // puts(str);

    // int countlength(char arr[]); //string length
    // char name[100];
    // fgets(name,100,stdin);
    // printf("length is %d",countlength(name));
    // }
    // int countlength(char arr[]){
    //     int count=0;
    //     for(int i=0;arr[i]!='\0';i++){
    //         count++;
    //     }
    //     return count-1;

        //   char firststr[100]="hello";
        //   char secstring[]="bro";
        //   strcat(firststr,secstring);
        //   puts(firststr);

            // char firststr[]="hlo";
            // char secstr[]="what";
            // printf("%d",strcmp(firststr,secstr));
           char str[]="helloworld";
           slice(str, 2, 6);
    }
    

