#include<stdio.h>
 int main(){
    int n,digit,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        digit = n % 10;
        count += 1;
        n = n / 10;
    }
    printf("NO. of digit = %d",count);
 return 0;
}