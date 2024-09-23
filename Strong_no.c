#include <stdio.h>
// strong number is when you add the factorial of each digit and then check if the number is equal to the original number
void main(){
int n,s,i,sum=0,fact=1;
printf("Enter any number : ");
scanf("%d",&n);
s=n;
while(n!=0){
i=n%10;
for(int j=1;j<=i;j++)
fact*=j;
sum+=fact;
fact=1;
n/=10;
}
if(sum==s)
printf("Strong Number");
else
printf("Not Strong Number");
}
