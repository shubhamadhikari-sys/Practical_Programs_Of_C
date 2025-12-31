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