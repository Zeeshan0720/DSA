#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(&arr[j],&arr[j+1]);
        }
    }
    }
}
void main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d of array : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Element of array before sorting : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    bubble_sort(arr,n);
    printf("\nElement of array after bubble sort : ");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}