#include <stdio.h>

void palin(int n,int x){
    if(n!=0){
        x=x*10 + n%10;
        palin(n/10,x);
        }
    else printf("%d",x);     
        
}

void main(){
    int n,x=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    palin(n,x);
}
