#include<stdio.h>
int main(){
    // char a='A';
    int n;
    printf("enter n:\t");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        // for(int j=1;j<=n;j++){
        //     printf("%d ",a);
        //     a++;
        // }
            printf("\n");
            char b='A';
            for(int k=1;k<=n;k++)
            {
                printf("%c ",b);
                b++;
            }
    }
}