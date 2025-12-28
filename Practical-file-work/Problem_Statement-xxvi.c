#include <stdio.h>
int factorial( int num)
{
    int fact=1;
    for( int i = 1 ; i <= num ; i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int num1;
    printf("Enter a number:");
    scanf("%d",&num1);
    int res = factorial(num1); 
    printf("Factorial is:%d",res);
    return 0;
}