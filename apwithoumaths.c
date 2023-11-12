#include <stdio.h>
int main()
{
    int n; // kitni baar loop chalega
    printf("enter a number :\t");
    scanf("%d", &n);
    int a = 4;
    // use extra variable
    for (int i = 1; i <= n; i++)
    {
        printf("%d  ", a);
        a = a + 3;
    }
    return 0;
}