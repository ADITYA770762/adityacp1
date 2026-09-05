#include <stdio.h>
void main()
{
    float d,r,p;
    printf("Enter amount in dollars");
    scanf("%f",&d);
     r = d * 95.56;
     p = r / 129.7;
     printf("$ %.2f = Rs. %.2f = p %.2f\n" ,d,r,p);
}