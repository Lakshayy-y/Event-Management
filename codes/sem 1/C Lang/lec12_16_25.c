    #include<stdio.h>
int main()
{
    int m;
    for(int i=0;i<7;i++){
        if(i<4)
        m=i;
        else
        m=6-i;
        for(int j=0;j<=m;j++){
            printf("* ");
        }
        printf("\n");
    }
}
