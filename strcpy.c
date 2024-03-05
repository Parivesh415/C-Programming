#include<stdio.h>
#include<string.h>
int main()
{
    char strr[]="poijIOUGYGJHIHUJBHUGBJHu";
    char str[]="Monkey type";
    char str1[]="Duniyo valo kaise ho appp ";
    strcpy(str,str1);
    printf("%s\n",str1);
    printf("%s\n",str);    
    strlwr(strr);
    printf("%s",strr);
}
