#include <stdio.h>
void main()
{
    float kg ,g;
    printf("Enter weight in kilograms");
    scanf("%f",&kg);
    g = kg * 1000;
    printf("%.3f kg =  %.2f gram\n",kg,g);
}