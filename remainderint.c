#include <stdio.h>
int main(){
    int a,b;
    printf("enter 1st no.");
    scanf("%d",&a);
    printf("enter 2nd no.");
    scanf("%d",&b);
    int q=a/b;
    int r=a-(b*q);
    printf("remainder when %d is divede by %d is: %d",a,b,r);
    
   return 0;
}
