//program for BMI calculator
#include<stdio.h>
int main()
{
   float bmi ,  ht ,wt ;
    printf("Enter your weight in KG:-  ");
    scanf("%f",&wt);
    printf("Enter your height in meter:-  ");
    scanf("%f",&ht);
    bmi=wt/(ht*ht);
    printf("Your BMI is :- %f\n",bmi);
    if (bmi<15)
        printf("Starvation");
    if(bmi>=15.1&&bmi<=17.5)
        printf("Anorexic");
    if(bmi>=17.6&&bmi<=18.5)
        printf("Underweight");
    if(bmi>=18.6&&bmi<=24.9)
        printf("Ideal");
    if(bmi>=25&&bmi<=25.9)
        printf("Overweight");
    if(bmi>=30&&bmi<=30.9)
        printf("obese");
    if(bmi>=40)
        printf("Morbidly obese");
    return 0;
}
