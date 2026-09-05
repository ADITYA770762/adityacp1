#include <stdio.h>
void main()
{
    int h,m,t;
    printf("Enter hours and minutes");
    scanf("%d %d",&h,&m);
    t=h*60+m;
    printf("%d hours %d min = %d min\n",h,m,t);
}