#include <stdio.h>
void main()
{
    int s1,s2,s3;
    float avg;
     printf("Enter the marks of three subjects: ");
     scanf("%d %d %d",&s1,&s2,&s3);
     avg = (s1 + s2 + s3) / 3.0;
     printf("Average marks= %.2f\n", avg);
}   