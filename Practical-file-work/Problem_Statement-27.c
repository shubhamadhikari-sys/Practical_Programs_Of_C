// Write a program to calculate the square of a number using functions.
#include <stdio.h>
int square( int num)
{
    return num*num;
}
int main()
{
    int num1;
    printf("Enter a number whose square you want:");
    scanf("%d",&num1);
    int res = square(num1);
    printf("Square of the number:%d",res);
    return 0;
}