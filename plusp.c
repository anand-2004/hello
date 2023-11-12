#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :\t");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i %3==0|| j %3==0)
                printf("* ");
            else

                printf("# ");
        }
        printf("\n");
    }

    return 0;
}