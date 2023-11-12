#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter 1st number :");
    scanf("%d", &a);
    printf("enter 2nd number :");
    scanf("%d", &b);
    printf("enter 3rd number :");
    scanf("%d", &c);
    // if (a>b && a>c)
    // {
    //     printf("%d is greatest", a);
    // }
    // if (b>a && b>c)
    // {
    //     printf("%d is greatest", b);
    // }
    // if (c>a && c>b)  
        
    // {
    //     printf("%d is greatest", c);
     if (a>b){
        if (a>c)
        printf("%d is greatest",a);
        else
        printf("%d is greatest",c);
        
     }
     else{
        if(b>c)
     }

    return 0;
}