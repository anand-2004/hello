#include <stdio.h>
int main()
{
    int n;

    printf("enter the number : \t");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            sum = sum + i;
        // if (i % 2 == 0)
        else
            sum = sum - i;
    }
    printf("the sum of  number is : %d", sum);
    return 0;
}
