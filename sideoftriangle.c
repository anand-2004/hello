#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter 1st side :");
    scanf("%d", &a);
    printf("enter 2nd side :");
    scanf("%d", &b);
    printf("enter 3rd side :");
    scanf("%d", &c);
    if ((a + b ) > c && (b + c) > a && (c + a) > b)
    {
        printf("valid triangle");
    }
    else
    {
        printf("invalid triangle");
    }

    return 0;
}