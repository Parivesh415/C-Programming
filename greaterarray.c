#include<stdio.h>
int main()
{
    int arr[10],n;
    for(int i=0 ; i<10 ;i++){
        printf("enter no::   ");
            scanf("%d", &arr[i]);
        }
    
    int large = arr[0];

    for(int i=0 ; i<10 ;i++){
        if (arr[i]>large){
            large=arr[i];
            
        }
        
    }
    printf("largest is %d\n",large);
}