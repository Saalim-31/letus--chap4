#include<stdio.h>
int main ()
{
    int year;
    printf("Enter the year ");
    scanf("%d",&year);
    if(year%100==0&&year%400==0)
        printf("Year is a leap");
    else
    {if(year%100!=0&&year%4==0)
        printf("Year is leap");
    else
        printf("Year is not leap");}
    return 0;

}
