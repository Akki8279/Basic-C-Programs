#include <stdio.h>

int main(void) {
  int n,sum=1;
  printf("Enter any number\n");
  scanf("%d",&n);
  for(int i=2;i<=n;i++)
    if(n%i==0)
      sum+=i;
  if(sum==n)
    printf("Perfect Number");
  else
    printf("Not a Perfect Number");
  return 0;
}
