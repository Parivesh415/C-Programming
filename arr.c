#include<stdio.h>
int main()
{
    int n;
    printf("enter the no of elements to be inserted in array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ;i++){
        printf("enter no::   ");
            scanf("%d", &arr[i]);
        }
    for(int i=0 ; i<n ;i++){
            printf("\nelements are:\n");
            printf("%d", arr[i]);
        }

    return 0;
}
