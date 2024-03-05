#include <stdio.h>
int main()
{
    int a,b,A[a][b];
    printf("array row , column :\n");
    scanf("%d%d",&a,&b);
    printf("Now printing the array \n");
    for (int i = 0; i <a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    printf("printing array\n");

    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
           printf(" %d     ",A[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}
