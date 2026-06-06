#include<stdio.h>
 int main(){
   int n,rev=0,x;
   printf("Enter the value of n: ");
   scanf("%d",&n);
   x=n;
   while(n>0){
    rev = rev*10 + n%10 ;
    n = n/10;
   }
   printf("Reverse = %d",rev);
   if(rev==x) printf("\nIt is a Palindrome Number ");
   else printf("\nIt is not a Palindrom Number ");
 return 0;
}