#include <stdio.h>
void main()
{
    float h,l,area;
    printf("Enter height and length of triangle");
    scanf("%f %f",&h,&l);
    area = 0.5 * h * l;
    printf("Area = %.2f\n",area);
}