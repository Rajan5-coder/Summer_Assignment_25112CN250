#include<stdio.h>
 int main(){
    int n,prime,larg_fac;
    printf("Enter number: ");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        if(n % i == 0){

            prime = 0;
            for(int j=2;j<i;j++){
                if(i % j == 0){
                    prime = 1;
                }
            }
            if(prime==0){
                larg_fac = i;
            }
        }
    }

    printf("Largest prime factor of %d is = %d",n,larg_fac);
 return 0;
}