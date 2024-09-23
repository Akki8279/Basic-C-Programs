#include <stdio.h>

int main() {
    int n,z,x;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(int i = 0;i<=n;i++){
        x = 0;
        z=i;
        while(z!=0){
            x = x*10 + z%10;
            z /= 10;
            }
        if(i==x)
            printf("%d ,",i);
            }
    return 0;
}
