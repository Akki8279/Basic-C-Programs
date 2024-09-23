#include <stdio.h>

int main(){
    int n;
    float sum=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
        sum += 1.0/i;
    printf("%f",sum);      
}
