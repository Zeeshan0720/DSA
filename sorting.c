#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(arr[i]<arr[j]){
            swap(&arr[i],&arr[j]);
        }
    }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}