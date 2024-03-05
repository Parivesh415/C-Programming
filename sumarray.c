#include<stdio.h>
int main()
{
    int arr[10],sum=0;
    for(int i=0 ; i<10 ;i++){
        printf("enter no::   ");
            scanf("%d", &arr[i]);
        
            }
    for(int i=0 ; i<10 ;i++){
        sum=sum+arr[i];
    }
    printf("sum is %d",sum);
}
