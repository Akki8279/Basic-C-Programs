#include <stdio.h>
int main(void) {
  int n;
  printf("Enter any number\n");
  scanf("%d",&n);
//  (n%2==0)?printf("Even"):printf("Odd");
  (n&1)?printf("Odd"):printf("Even");
  return 0;
}
