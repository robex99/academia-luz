#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *x, int *y);
void quicksort(int a[], int length);
void quicksort_recursion(int a[], int low, int high);
int partition(int a[], int low, int high);

int main()
{
    int a[] = {2,4,7,3,10,12,1};
    int length = 7;

    quicksort(a, length);

    for (int i = 0; i < length; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void quicksort(int a[], int length)
{
    srand(time(NULL));

    quicksort_recursion(a, 0, length - 1);
}

void quicksort_recursion(int a[], int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition(a, low, high);
        quicksort_recursion(a, low, pivot_index - 1);
        quicksort_recursion(a, pivot_index + 1, high);
    }
}

int partition(int a[], int low, int high)
{
    int pivot_index = low + (rand() % (high - low));

    if (pivot_index != high)
        swap(&a[pivot_index], &a[high]);

    int pivot_value = a[high];

    int i = low;

    for (int j = low; j < high; j++)
    {
        if (a[j] <= pivot_value)
        {
            swap(&a[i], &a[j]);
            i++;
        }
    }
    swap(&a[i], &a[high]);

    return i;
}
