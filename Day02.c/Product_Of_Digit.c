#include<stdio.h>
 int main(){
    int n,pro=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(n>0){
     pro =pro*(n%10) ;
     n = n/10;
    }
    printf("Product of digit of given number is = %d",pro);
 return 0;
}