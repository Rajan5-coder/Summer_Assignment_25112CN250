#include<stdio.h>
 int main(){
    int x,n,pow=1;
    printf("Enter base number: ");
    scanf("%d",&x);  // x
    printf("Enter power number: ");
    scanf("%d",&n);  // n
    for(int i=1;i<=n;i++){
        pow = pow*x;
    }

    printf("%d ^ %d = %d",x,n,pow);


 return 0;
}