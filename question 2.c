#include <stdio.h>

int main()
{
    int s,h=0,m=0;
    scanf("%i",&s);
    while (s>=3600)
    {
        s  = s - 3600;
        h++;
    }
    while (s > 59)
    {
        s = s - 59;
        m++;
    }
    printf("hours = %i,minutes = %i, seconds = %i",h,m,s);
}