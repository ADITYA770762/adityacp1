#include <stdio.h>
void main()
{
    float b,kb,mb,gb;
    printf("Enter size in bytes");
    scanf("%f",&b);
    kb = b /1024;
    mb = kb / 1024;
    gb = mb / 1024;
    printf("Size in kilobytes: %.4f\n",kb);
    printf("Size in megabytes: %.4f\n",mb);
    printf("Size in gigabytes: %.4f\n",gb);     
}