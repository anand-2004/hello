#include <stdio.h>
int main()
{
    int n;
    int a = 0;
    printf("enter a number : \t");
    scanf("%d", &n);
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)

        {
            a = 1;
            break;
        }
    }
    if (n == 1)
        printf("the no is niether prime nor composite");
    else if (a == 0)
        printf("the no is prime");
    else
        printf("the no is composite");

    return 0;
}