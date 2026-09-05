#include <stdio.h>
void main()
{
    float gross,allowance,deduction,net;
    printf("Enter gross salary: ");
    scanf("%f",&gross);

    allowance = gross * 10/100;
    deduction = gross * 3/100;
    net = gross + allowance - deduction;

    printf("Gross salary: %.2f\n", gross);
    printf("Allowance: %.2f\n", allowance);
    printf("Deduction: %.2f\n", deduction);
    printf("Net salary: %.2f\n", net);
}   