#include <stdio.h>
void main()
{
    int t,h,m;
    printf("Enter total minutes");
    scanf("%d",&t);
    h=t/60;
    m=t%60;
    printf("%d min = %d hours %d min\n",t,h,m);
}