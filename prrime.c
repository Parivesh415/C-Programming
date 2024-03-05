#include<stdio.h>
int main()
{
  int i=2,n,a,prime=0;
  printf("\nEnter the number:");
  scanf("%d",&n);
  while(i<n)
  {
    if(n%i==0)
    {
      prime++;
    }
    i++;
  }
  if(prime==0)
  {
    printf("\nThis number is Prime");
  }
  else
  {
    printf("\nThis number is Not Prime");
  }
  return 0;
}