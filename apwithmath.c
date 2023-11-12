#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :\t ");
    scanf("%d",&n);
    for (int i=1;i<=3*n+1;i=i+3)
    {
        printf("%d ",i);
    }
}
