#include<stdio.h>
int main()
{
    int s1,s2,s3,a,b,c;
    printf("Enter the three sides of the triangle:-     ");
    scanf("%d %d %d",&s1,&s2,&s3);
     if (s1!=s2!=s3)
        printf("Triangle is scalene  ");
    if (s1==s2&&s2==s3)
        printf("Triangle is equilateral");
     if(s1==s2&&s2==s3)
        printf("Triangle is isosceles");
     if(s1==s3&&s1!=s3)
        printf("Triangle is isosceles");
     if(s3==s2&&s1!=s3)
        printf("Triangle is isosceles");


     a=(s1*s1)==(s2*s2)+(s3*s3);
     b=(s2*s2)==(s3*s3)+(s1*s1);
     c=(s3*s3)==(s2*s2)+(s1*s1);
        if(a||b||c)
            printf("and is right angled");
        return 0;


}
