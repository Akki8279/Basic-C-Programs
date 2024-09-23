#include <stdio.h>
//triangular number is a number from which we can make a triangle 
int main(void) {
  int n,sum=0;
  printf("Enter any number\n");
  scanf("%d",&n);  
  for(int i=1;i<=n;i++){
    sum+=i;
    if(sum==n){
      printf("The number is triangular number");
      break;
    }
  }
  if(sum!=n)
    printf("not triangular");
  return 0;
}
