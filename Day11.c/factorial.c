#include<stdio.h>

int fac(int n){
    int f =1;
    if(n==0) return 1;
    else return n*fac(n-1);
}
 int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);

    if(n<0) printf("Enter positive number");
    
    printf("%d! = %d",n,fac(n));
 return 0;
}