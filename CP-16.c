#include <stdio.h>
void main()
{
    float p,r,n,amount,i;
    printf("Enter principal,rate and time");
    scanf("%f%f%f",&p,&r,&n);
    i = (p*r*n)/100;
    amount = p + i;
    printf("Principal = %.2f\n",p);
    printf("Simple interest = %.2f\n",i);
    printf("Amount = %.2f\n",amount);
}