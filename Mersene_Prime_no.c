#include <stdio.h>

void main(){
int x,n,temp,j=0,k=0,a[100];
printf("Enter any number : ");
scanf("%d",&n);
for(int i=1;i<n;i++){
temp=0;
for(int j=2;j<i;j++){
if(i%j==0)
temp++;
}
if(temp==0){
a[k++]=i;
}
}
for(int i = 1; i<k;i++){
x = pow(2,i) -1;
for(int j =0; j<k;j++){
if(a[j]==x)
printf("%d,",x);
}
}
}
