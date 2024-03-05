#include<stdio.h>
int main()
{
    int A[5];
    printf("Enter the elemets in array \n");
    for(int k=0;k<5;k++)
    {
        scanf("%d",&A[k]);
    }
    printf("Printing the array: \n");
    for(int k=0;k<5;k++)
    {
        printf("%d\t",A[k]);
    }
    return 0 ;
}