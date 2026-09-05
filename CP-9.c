#include <stdio.h>
 void main() {
    float d ,r ;
    printf("Enter amount in rupees");
    scanf("%f",&r);
    d = r / 95.56;
printf("$ %.2f = Rs. %.2f\n",d,r);
}