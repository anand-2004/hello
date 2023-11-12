#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: \t");
    scanf("%d", &n);
    int product = 1;
    for (int i = 1; i <= n; i++)
    {

        product = product * i;
    printf("the factorial %d is : %d\n" ,i, product);
    }
    return 0;
}