#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of array\n");
    scanf("%i",&n);

    int a[n];
    printf("enter array elements");
    for (int i = 0; i<n;i++)
    {
        scanf("%i",&a[i]);
    }
    for (int i = 0; i<n;i++)
    {
        for (int j = i+1; j<n;j++)
        {
            if (a[i] == a[j])
            {
             for (int k = j; k < n - 1; k++)
            {
                    a[k] = a[k + 1];
            }
            n--;
            }
            else
            {
                j++;
            }

    }
    }


 printf("array after removing duplicate elements");
    for (int i = 0;i<n;i++)
    {
        printf("%i ",a[i]);
    }
}