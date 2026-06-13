#include<stdio.h>

int fac(int n){
    if(n==0) return 1;
    else return n*fac(n-1);
}

 int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n<0) printf("Enter positive number");
    else printf("%d! = %d",n,fac(n));
 return 0;
}