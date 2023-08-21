#include<stdio.h>
int main()
{
    float ness,cc,ts;
    printf("Enter the hardness of the steel :- ");
    scanf("%f",&ness);
    printf("Enter the carbon content of the steel :- ");
    scanf("%f",&cc);
    printf("Enter the tensile strength of the steel :- ");
    scanf("%f",&ts);
    if (ness>50&&cc<0.7&&ts>5600)
        printf("Grade 10");

    if (ness>50&&cc<0.7&&ts<5600)
        printf("Grade 9");
    if (ness<50&&cc<0.7&&ts>5600)
        printf("Grade 8");
    if (ness>50&&cc>0.7&&ts>5600)
        printf("Grade 7");
    if (ness>50||cc<0.7||ts>5600)
        printf("Grade 6");
    else
        printf("Grade 5");
    return 0;

}
