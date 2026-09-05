#include <stdio.h>
void main()
{
    float g ,kg;
    printf("Enter weight in grams");
    scanf("%f",&g);
    kg = g / 1000;
    printf("%.2f gram =  %.3f kg\n",g,kg);
}