#include<stdio.h>
 int main(){
    int n,largest_factor;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        while(n % i == 0){
           largest_factor = i;
           n = n / i;           
        }
    }
    printf("Largest prime factor is = %d",largest_factor);
 return 0;
}