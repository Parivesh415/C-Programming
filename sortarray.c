#include<stdio.h>
int main()
{
    int A[5],temp;
    printf("Enter the elemets in array \n");
    for(int k=0;k<5;k++)
    {
        scanf("%d",&A[k]);
    }
    printf("Printing the array: \n");
    for(int k=0;k<5;k++)
    {
        for(int j =0;j<3;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            
            }
        }
    }
    for(int j=0;j<5;j++)
    {
        printf("%d\t",A[j]);
    }
    return 0 ;
}