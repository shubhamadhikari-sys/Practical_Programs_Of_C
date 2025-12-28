// Question no 12 from the list of the given mini project list.
#include<stdio.h>
int factorial(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else{
      return(num* factorial(num -1));
    }
}
int power (int num, int p){
    if (p == 0)
    return 1;
    else
    return (num* power(num,p-1));
}
int fibo(int n)
{
    if(n == 0)
    return 0;
    if(n == 1)
    return 1;
    else
    return(fibo(n-1)+fibo(n-2));
}
int main()
{
    int num1,fact,num2,p,res,terms;
    printf("\nEnter a number:");
    scanf("%d",&num1);
    fact = factorial(num1);
    printf("Factorial of a number is : %d",fact);
    printf("\nEnter a number :");
    scanf("%d",&num2);
    printf("\nEnter the power : ");
    scanf("%d",&p);
     res = power(num2,p);
    printf("\nNumber to its power=:%d",res);
    printf("\nEnter number of terms of fibonnaci series :");
    scanf("%d",&terms);
   
    printf("\nFibonacci Series:\n");
    for( int i =0 ; i<=terms ; i++)
    {
        printf("%d\t",fibo(i));
    } 
    return 0;
}