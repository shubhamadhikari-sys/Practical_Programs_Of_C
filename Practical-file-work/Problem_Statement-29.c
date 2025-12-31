// Write a C program to input marks of two subjects and calculate the average. Based on the average, assign a grade as follows:
// Average >= 90: Grade A
// Average >= 80 and < 90: Grade B
// Average >= 70 and < 80: Grade C
// Average >= 60 and < 70: Grade D
// Average < 60: Grade F
#include <stdio.h>
int main(){
    int m1,m2;
    double avg=0.0;
    printf("Enter marks of first subject:");
    scanf("%d",&m1);
    printf("Enter marks of second subject:");
    scanf("%d",&m2);
    avg=(m1+m2)/2.0;
    if( avg >= 90)
    printf("Grade: A");
    else if(avg >= 80)
    printf("Grade: B");
    else if(avg >= 70)
    printf("Grade: C");
    else if(avg >= 60)
    printf("Grade: D");
    else
    printf("Grade: F");
return 0;
}