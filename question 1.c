#include <stdio.h>

int main()
{
    int a,b,c,s,x=0;
    scanf("%i%i%i",&a,&b,&c);
    s = a+b+c;
    printf("sum = %i\n",s);
    if(s%2 == 0)
    {
        printf("%i is even\n",s);
    }
    else
    {
        printf("%i is odd\n",s);
    }
    if (s == 0|| s<0)
    {
        printf("%i is neither prime nor composite\n",s);
    }
    else if (s > 0)
    {
    for (int i = 1;i<=s;i++)
    {
        if(s%i == 0)
        {
            x++;
        }
    }

    if(x == 2)
    {
        printf("%i is prime\n",s);
    }
    else
    {
        printf("%i is composite\n",s);
    }
    }
} 
