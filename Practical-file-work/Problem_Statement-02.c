// swap two number
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Numbers before swapping:\t%d\t%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping:\t%d\t%d",a,b);
return 0;
}