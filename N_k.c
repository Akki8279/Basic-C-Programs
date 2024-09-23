#include <stdio.h>

void main(){
//output : 
//Enter any two number : 10 5
//10      5       0       5       10
    int n,k,N;
    printf("Enter any two number : ");
    scanf("%d%d",&n,&k);
    N=n;
    printf("%d\t",n);
    while(n>0)
        printf("%d\t",n=n-k);
    while(n!=N)    
        printf("%d\t",n=n+k);
}
