#include<stdio.h>
#include<math.h>
 int main(){
    int n,n1,n2,digit1,digit2,num_digit,sum,pow;
    num_digit = 0;
    sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    n2 = n1 = n; 

    // no. of digit
    while(n>0) {
        digit1 = n % 10;
        n = n/10;
        num_digit += 1;
    }
    // calculating power and sum
    while(n1>0){
        digit2 = n1 % 10;
        pow = 1;
        for(int i=1;i<=num_digit;i++){
            pow = pow*digit2;
        }
        sum = sum + pow;
        n1 = n1 /10;
    }
    // checking condition
    if(sum == n2) printf("%d is a Armstrong Number",n2);
    else printf("%d is not a Armstrong number",n2);
    
  return 0;
}
