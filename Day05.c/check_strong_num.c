#include<stdio.h>
 int main(){
    int n,n1,digit,fact,sum;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    n1 = n;
    sum = 0;

    while(n>0){
        fact = 1;
        digit = n % 10;
        for(int i=1;i<=digit;i++){
            fact = fact*i;
        }
        sum = sum + fact;
        n = n / 10;
    }

    if(sum == n1  &&  n1 != 0) printf("Strong Number");
    else printf("NOt a Strong Number");
 return 0;
}