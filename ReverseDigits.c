#include <stdio.h>

int reverseDigits(int n){
static int x=0;
if(n==0)
return x;
x = x*10 + n%10;
reverseDigits(n/10);
}

void main(){
int n;
printf("Enter any number : ");
scanf("%d",&n);
printf("%d",reverseDigits(n));
}
