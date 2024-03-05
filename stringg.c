#include<stdio.h>
#include<memory.h>
int main()
{
    int a;
    char str[10]={'a','b','c','d','e'};
    char name[]="Hello Everyone How Are You";
    a=strlen(name);
    printf("%d",a);
    for (int i = 0;i<=a; i++)
    {
         printf("%s\n",name[i]);   
    }
    printf("%s",str);
    return 0;
}

