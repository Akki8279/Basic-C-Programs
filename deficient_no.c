#include <stdio.h>
//Deficient number is number whose sum of divisors is less than the number itself
void main(){
int n,sum=0,i=1;
printf("Enter any number : ");
scanf("%d",&n);
while(i<n){
if(n%i==0)
sum+=i;
i++;
}
if(sum<n)
printf("Deficent number");
else 
printf("Not Deficent number");
}
