
#include<stdio.h>
int main(){
    int n;
    printf("enter a number:\t");
    scanf("%d",&n);
    for ( int i=1;i<=n;i++){
        char a=65;
    for (int j=1;j<=i;j++){
    printf("%c ",a);
    a++;
    }
    printf("\n");
    
    }
    return 0;
    
}