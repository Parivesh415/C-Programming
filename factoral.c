/*#include <stdio.h>
int main() {

  int a,b;
  printf("Enter the number of terms: ");
  scanf("%d", &a);
  for(int i=1;i<=a;i++)
  {
    b=a*i;

  }
  printf("factorial is %d",b);
  
  
return 0;
}

*/
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error! Factorial of a negative number");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}
