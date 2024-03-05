#include<stdio.h>
int main()
{

    char str[1];
    printf("enter the string;  ");

    scanf("%[^\n]s",str);
    

    //alternative of scanf is gets//
    //gets(str);//


    //alternative of printf is puts//
    //puts(str);//
    
    printf("your input string is : \n%s",str);//
    return 0;
}
 