#include<stdio.h>

void main()
{
float a,b,ad,sb,ml,dv;
printf("Enter 2 values");
scanf("%f %f",&a,&b);
ad = a + b;
sb = a - b;
ml = a * b;
dv = 1.0 * a / b;
printf("Answers = %.2f %.2f %.2f %.2f\n",ad,sb,ml,dv);
}