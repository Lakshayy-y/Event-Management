#include <iostream>
using namespace std;
int main(){
    char str[160];
    int c[25];
    scanf("%[^\n]",str);
    for(int i=0;str[i]='\0';i++){
        if(str[i]>='A'&&str[i]<='Z')
        c[str[i]-'A']=1;
        else if(str[i]>='a'&&str[i]<='z')
        c[str[i]-'a']=1;
    }
    for(int i=0;i<26;i++){
        if(c[i]!=1){
            printf("not panagram");
            return 0;
        
        }
    }
    printf("panagram");
    return 0;
}