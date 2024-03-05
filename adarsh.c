#include <stdio.h>
int main() {
    int i;
    char s[]="Hello";
    for (i=0;s[i]!='\0'; i++){
        printf("%d",i);
        if (s[i]='\0')
        {
            printf("%d",i);
        }
    }
    return 0;

}