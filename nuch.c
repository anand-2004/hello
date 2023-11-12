#include <stdio.h>
int main()
{
    int n;

    printf("Enter a number : \t");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        char a = 65;

        for (int j = 1; j <= i; j++)
            if (i % 2 == 1)
            {
                printf("%d ", j);
            }
            else
            {

                printf("%c ", a);
                a++;
            }

        printf("\n");
    }
    return 0;
}