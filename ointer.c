#include <stdio.h>
int main()
{
    int a = 5;
    int* x=&a;


    printf("%p", x);//%p,&*x
    printf("%p",&x);
    return 0;
}