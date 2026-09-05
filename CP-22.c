#include <stdio.h>
void main()
{
    float gross,discount,net;
    printf("Enter the gross sales: ");
    scanf("%f",&gross);

    discount = gross * 0.10;
    net = gross - discount;

    printf("Gross sales= %.2f\n", gross);
    printf("Discount= %.2f\n", discount);
    printf("Net sales= %.2f\n", net);
}