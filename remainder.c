#include <stdio.h>
int main(){
    float a,b;
    printf("enter 1st no.");
    scanf("%f",&a);
    printf("enter 2nd no.");
    scanf("%f",&b);
    float q=a/b;
    float r=a-(b*q);
    printf("remainder when %f is divede by %f is: %f",a,b,r);
    
   return 0;
}
