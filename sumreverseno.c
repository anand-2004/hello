#include <stdio.h>
int main()
{
    int n;
    int a = 0;

    printf("enter the number\t");
    scanf("%d", &n);
    int y=n;
    while (n != 0)
    {
        a = a * 10;
        a = a + (n % 10);
        n = n / 10;
    }

    y=y+a;
    printf("%d", y);
}