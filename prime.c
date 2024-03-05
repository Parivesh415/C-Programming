// C program to check whether a number is prime or not
#include<stdio.h>
#include <math.h>

int main()
{
	int n,flag;
	printf("Enter the no to check :  ");
	scanf("%d",&n);

	for (int i = 2; i * i <= n; i++) {

		// If n is divisible by any number between
		// 2 and n/2, it is not prime
		if (n % i == 0) {
			flag = 1;
			break;
		}
	}

	printf("%d is ", n);
	if (flag == 1) {
		// it is only printed if the number is not prime
		printf("not ");
	}
	printf("a prime number.\n");

	return 0;
}
