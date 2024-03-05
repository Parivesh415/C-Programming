#include<stdio.h>
int main()
{
    int arr[10],n;
    for(int i=0 ; i<10 ;i++){
        printf("enter no::   ");
            scanf("%d", &arr[i]);
        }
    
    printf("enter a no to search");
    scanf("%d",&n);

    for(int i=0 ; i<10 ;i++){
        if (arr[i]==n){
        printf("yes %d exists in the array\n",n);
        break;
        }
        
    }
}