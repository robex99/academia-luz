#include <stdio.h>

int main()
{
    int a[] = {1,3,5,4,8,7,9};
    int length = 7;

    for (int i = 0; i < length - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < length; j++)
            if (a[j] < a[min]) min = j;

        if (min != i)
        {
            int tmp = a[i];
            a[i] = a[min];
            a[min] = tmp;
        }
    }

     for (int i = 0; i < length; i++)
        printf("a[%d] = %d\n", i, a[i]);
    return 0;
}
