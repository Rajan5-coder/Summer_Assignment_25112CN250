#include<stdio.h>
 int main(){
    int x,n,val=1;
    printf("Enter the base: ");
    scanf("%d",&x);   // x --> base
    printf("Enter the power: ");
    scanf("%d",&n);   // n --> power

    for(int i=1;i<=n;i++){
        val = val*x;
    }
    printf("%d^%d = %d",x,n,val);
 return 0;
}