#include<stdio.h>
 int main(){
    int n,i,mul;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mul=n*i;
        printf("\n%d * %d = %d ",n,i,mul);
    }
 return 0;
}