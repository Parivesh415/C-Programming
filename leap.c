#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year :  ");
    scanf("%d",&a);
    if (a%4==0)
    {
        printf("The year %d is an leap year ",a);
    }
    else
    {
        printf("The year %d is not a leap year",a);
    }
    return 0;
}


    //write a program to check if the year is leap year or not //#include <stdio.h>             