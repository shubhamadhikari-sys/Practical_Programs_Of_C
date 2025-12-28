#include <stdio.h>
int greater( int a , int b , int c)
{
    if( a > b && a > c)
    return a;
    else if( b > a && b > c)
    return b;
    else
    return c;
}
int main()
{
    int a1,b1,c1;
    printf("Enter first number:");
    scanf("%d",&a1);
    printf("Enter second number:");
    scanf("%d",&b1);
    printf("Enter third number:");
    scanf("%d",&c1);
    int res = greater(a1,b1,c1);
    printf("Greater number is:%d",res);
    return 0;
}