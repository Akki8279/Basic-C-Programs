#include <stdio.h>
// Perfect number is a number that is equal to the sum of its proper divisors.
int main(void) {
  int n,sum=1;
  printf("Enter any number\n");
  scanf("%d",&n);
  for(int i=2;i<=n/2;i++)
    if(n%i==0)
      sum+=i;
  if(sum==n)
    printf("Perfect Number");
  else
    printf("Not a Perfect Number");
  return 0;
}
