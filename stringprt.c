#include<stdio.h>
#include<string.h>
int main()
{
    char name[]="raju ram jindabad";
    int i=0,a;
    a=strlen(name);
    while (i<=a)
    {
        printf("%c",name[i]);
        i++;
    }
return 0;
    
}