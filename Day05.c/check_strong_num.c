#include<stdio.h>

int factorial(int n){
    int fac = 1;
    while(n>0){
        fac = fac*n;
        n--;
    }
    return fac;
}
 int main(){
    int n,n1,digit,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    n1 = n;
    while(n>0){
        digit = n % 10;
        sum += factorial(digit);
        n = n / 10;
    }

    if(sum==n1) printf("Strong Number");
    else printf("Not a Strong Number");

 return 0;
}
