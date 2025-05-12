#include<stdio.h>
void main()
{
    int num;
    printf("Enter Any integer = ");
    scanf("%d",&num);
    if (num % 2==0){
        printf("Entered no %d is even",num);
    }
    else{
        printf("Entered no %d is odd",num);
    }
}