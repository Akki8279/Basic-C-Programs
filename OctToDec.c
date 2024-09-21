void main(){
    int n,i=1,res=0,x;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n!=0){
        x = n%10;
        if(x>7){
            printf("Invalid Input");
            exit(0);
        }
        res = res + x*i;
        i=i*8;
        n/=10;
    }
    printf("%d",res);
}
