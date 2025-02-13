#include<stdio.h>
int search(int array[], int x, int start, int end)
{
    while (start <= end)
    {
        int mid = start+(end - start) / 2;
        if (x == array[mid])
            return mid;
        if (x > array[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}
void main(){
    int num;
    int arr[100];  
    for (int i = 0; i < 100; i++) {  
        arr[i] = i + 1;  
    }  
    // for (int i = 0; i < 100; i++) {  
    //     printf("%d ",arr[i]);  
    // }  

    printf("\nEnter a number from 1 to 100\n");
    scanf("%d",&num);
    int result = search(arr, num, 0, 99);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);

}