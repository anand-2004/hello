// #include <stdio.h>
// int min(int a, int b)
// {
//     if (a < b)
//         return a;
//     else
//         return b;
// }
// int gcd(int a, int b)
// {
//     int hcf;
//     for (int i = 1; i <= min(a,b); i ++)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             hcf = i;
//         }
//     }
//     return hcf;
// }
// int main()
// {
//     int a;
//     printf("enter 1st number :\t");
//     scanf("%d", &a);
//     int b;
//     printf("enter 2nd number :\t");
//     scanf("%d", &b);
//     int hcf = gcd(a, b);
//     printf("the hcf/gcdof %d and %d is : %d", a, b, hcf);
// }





#include <stdio.h>
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int gcd(int a, int b)
{
    int hcf;
    for (int i =min(a,b); i>=1; i ++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main()
{
    int a;
    printf("enter 1st number :\t");
    scanf("%d", &a);
    int b;
    printf("enter 2nd number :\t");
    scanf("%d", &b);
    int hcf = gcd(a, b);
    printf("the hcf/gcdof %d and %d is : %d", a, b, hcf);
}