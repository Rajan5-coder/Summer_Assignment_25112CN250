#include<stdio.h>
 int main(){
    int n,n1,rev=0;
    printf("Enter number: ");
    scanf("%d",&n);
    n1 = n;
    while(n>0){
        rev = rev*10 + (n % 10);
        n /= 10;
    }

    if(n1 == rev) printf("Palindrom Number:");
    else printf("Not a Palindrom Number: ");
 return 0;
}   