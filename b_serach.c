#include <stdio.h>

int binarySearch(int array[], int x, int start, int end)
{
    while (start <= end)
    {
        int mid = (end - start) / 2;
        if (x == array[mid])
            return mid;
        if (x > array[mid])
            start = mid + 1;
        if (x < array[mid])
            end = mid - 1;
    }
    return -1;
}

void main()
{

    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int array[n];
    printf("Enter array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int x;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i] < array[j])
            {
                int t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nEnter Target : ");
    scanf("%d", &x);

    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}