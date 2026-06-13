#include<stdio.h>

int sum_digit(int n){
    int sum=0;
    while(n>0){
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
 int main(){
    
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Sum of digit = %d",sum_digit(n));
 return 0;
}