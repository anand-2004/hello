// #include <stdio.h>
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
//     return;
// }
// int main()
// {
//     int a = 2;
//     int b = 9;
//     swap(&a, &b);
//     printf("value of a is %d\n", a);
//     printf("valude of b is %d", b);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a = 25;
    int *x = &a;
    int **y = &x;
    printf("%d\n", a);
    printf("%d\n", *x);
    printf("%d\n", **y);
}