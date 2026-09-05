#include <stdio.h>
void main()
{
    float f,c;
    printf("Enter temperature in fahrenheit");
    scanf("%f",&f);
    c = (5.0/9.0)*(f-32);
    printf("%.2f F = %.2f C\n",f,c);
}