//Code to find the size of different data types in C
#include<stdio.h>
int main()
{
    printf("Size of double:%zd bytes \n",sizeof(double));
    printf("Size of int:%zu bytes \n",sizeof(int));
    printf("Size of flost:%zu bytes \n",sizeof(float));
    printf("Size of char:%zu bytes \n",sizeof(char));
}