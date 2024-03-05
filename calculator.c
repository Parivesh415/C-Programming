#include <stdio.h>
int main()
{
    char op;
    int a,b;
    printf("Enter what you want to do +,-,*,/  \n");
    scanf("%c", &op);
    printf("Enter no 1 :  ");
    scanf("%d",&a);
    printf("Enter no 2 :  ");
    scanf("%d",&b);
    if (op =='+'){
        printf("Sum of %d and %d is %d ",a,b,(a+b));
    }
    else if (op =='-')
    {
        printf("Diff of %d and %d is %d ",a,b,(a-b));
    }
    else if (op=='*')
    {
        printf("Product of %d and %d is %d ",a,b,(a*b));
    }
    else if (op=='/')
    {
        printf("Division of %d and %d is %d ",a,b,(a/b));
    }
    else
    {
        printf("You have entered something else   ");
    }
    return 0;


}


