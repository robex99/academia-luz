#include <stdio.h>


int main()
{
    int a[]= {1,2,3,5,2,9,8};
    insertion_sort(a, 7);

    for (int i = 0; i < 7; i++)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;

}

void insertion_sort(int a[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
