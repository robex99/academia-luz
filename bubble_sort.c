#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a[] = {2,8,9,4,5,7,3};

    int length = 7;

    bubble_sort(a, length);

    for (int i = 0; 1 < length; i++)
        printf("a[%d] = %d\n", 1, a[i]);

    return 0;
}

void bubble_sort(int a[], int length)
{
    bool swapped = false;
    int i = 0;
    do
    {
        swapped = false;
        for (int j = 0; j < (length - 1 - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j +1];
                a[j + 1] = temp;
                swapped = true;
            }
        }
        i++;
    }  while (swapped);
}
