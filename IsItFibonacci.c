#include <stdio.h>

int main() {
        int x=0,a=1,n;
        printf("Entr any number : ");
        scanf("%d",&n);
        for(int i = 0;i<=n;i++){
            if(i<=2)
                x=i;
            else{
                x = x + a;
                a = x - a;
            }
//            printf("%d ,",x);
            if(x==n){
                printf("Yes");
                break;
                }
            else if(x>=n) // To decrease time complexity
                break;
            }
    return 0;
}
