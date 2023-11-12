#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :\t");
    scanf("%d", &n);
    int sum = 0;
    if (n % 2 == 0){
        sum=-(n/2);
    }
    if(n%2!=0){
        sum=-n/2+n;
    }
    printf("the sum of n number is : %d",sum);
    return 0;
    
}