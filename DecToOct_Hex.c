#include<stdio.h>
void main(){
    int n,N,oct_rem[10],hex_rem[10],i=0,j=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    N = n;
    while(n!=0){
        oct_rem[i++] = n%8;
        n/=8;
    }
    while(N!=0){
        hex_rem[j++] = N%16;
        N/=16;
    }
    /*
//      To decrease time complexity
//      Combining both loop given above
        while(n!=0 || N!=0){
        if(n!=0){
        oct_rem[i++] = n%8;
        n/=8;
        }
        if(N!=0){
        hex_rem[j++] = N%16;
        N/=16;
        }
    */
    printf("Octal number is : ");
    while(--i>=0)
        printf("%d",oct_rem[i]);
    printf("\nHexadecimal number is : ");  
    while(--j>=0){
        if(hex_rem[j]<10)
            printf("%d",hex_rem[j]);
        else
            printf("%c",55+hex_rem[j]);
        }
}
