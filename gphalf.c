#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :\t");
    scanf("%d", &n);
    float a = 100;
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%f \n", a);
        a = a / 2;
    }
}