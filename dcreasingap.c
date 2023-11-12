#include <stdio.h>
int main()
{
    int n;
    printf("enter n number : \t");
    scanf("%d", &n);
    int a = 100;
    int i;
    for ( i = 1;  a > 0; i++)
    {
        printf("%d ", a);
        a = a - 3;
    }
    return 0;
} //&d give me an infinte loop why/
//%d,&d means?






// for (int i = 1; a > 0; i++):
//  This is a for loop that initializes i to 1.
//  The loop will continue as long as a is greater than 0.
//   After each iteration, i will be incremented by 1.(refrred to soham for this doubt?)
//how loop work in this case/