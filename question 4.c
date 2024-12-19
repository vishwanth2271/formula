#include <stdio.h>

int main()
{
    int x=0;
    int p;
    printf("enter 4 digit pin\n");
    while (1)
    {
        scanf("%i",&p);
        if (p != 1234)
        {
        x++;
        printf(" try again\n");
        }
        else if (p == 1234)
        {
            printf("correct password\n");
            break;
        }
        if (x == 3)
        {
            printf("you have exceeded the number of login attempts try again later\n");
            break;
            return 0;
        }

    }


}