//WAP to demonstrate the use of increment and decrement operators in C.
#include<stdio.h>
int main()
{
    int c=10,res;
    res=c++;
    printf("c++ --> %d \n",res);
    res=c--;
     printf("c-- --> %d \n",res);
    res=++c;
    printf("++c  -->%d \n",res);
    res=--c;
    printf("--c -->%d \n",res);
    return 0;
}