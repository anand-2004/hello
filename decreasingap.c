#include <stdio.h>
int main()
{
    int n;
    printf("enter n number : \t");
    scanf("&d", &n);
    int a = 100;
    printf("%d    ", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a - 3;
    }
    return 0;
} //&d give me an infinte loop why/
//%d,&d means?
