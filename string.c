/*string ends with "\0"

string is a group of character which ends with a null (/0)
character string uses a single ''
string uses ""

*/


#include<stdio.h>
int main()
{
    char str[10]={'a','b','c','d','e','\0'};
    for(int i=0; str[i]='\0';i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
