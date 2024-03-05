#include <stdio.h>
int main() {
    int i;
    char s[1000];
    printf("enter the string;  ");

    scanf("%[^\n]s",s);

    for (i = 0; s[i] != '\0'; i++);
    {
    
    printf("Length of the string: %d", i);
    }
    return 0;
}
