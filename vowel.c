#include<stdio.h>
#include<string.h>
int vowelCount(char str[]);

int main(){
    char str[100]= "Parivesh";
    printf(" vowel count is %d", vowelCount(str));
    }

int vowelCount(char str[]){
    int count=0,i=0;
   for(i;str[i]!='\0';i++) 
    {
        if(str[i] =='a'|| str[i]=='e'||str[i]=='i'|| str[i]=='O'|| str[i]=='u'||
           str[i] =='A'|| str[i]=='E'||str[i]=='I'|| str[i]=='O'|| str[i]=='U')
        {
            count ++;
        }
    }
return count;
}