#include<stdio.h>
 int main(){
    int n,digit_product = 1;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n>0){
        digit_product = digit_product*(n % 10);
        n /= 10;
    }

    printf("Product of digit is = %d",digit_product);
 return 0;
}