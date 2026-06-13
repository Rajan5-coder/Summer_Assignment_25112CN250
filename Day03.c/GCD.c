#include<stdio.h>
 int main(){
    int a,b,max,lcm,gcd;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    max = (a>b) ? a : b;
    while(1){
        if((max % a == 0) && (max % b == 0)){
            lcm = max;
            break;
        }
        ++max;
    }

    gcd = (a * b)/lcm;
    printf("GCD of %d and %d is = %d",a,b,gcd);
 return 0;
}