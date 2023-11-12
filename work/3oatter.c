#include <stdio.h>
int main()
{
    int n;
    printf("enter a number of rows\t ");
    scanf("%d", &n);
    int m;

    printf("enter a number of coloumn\t");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}