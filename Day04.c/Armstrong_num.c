#include<stdio.h>
 int main(){
    int n,n1,n2,count=0,digit,power,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);

    n2 = n1 = n;
    
    if(n<0) printf("-ve number");
    else{
        while(n>0){
           count++;
           n = n / 10;
        }

        while(n1>0){
           digit = n1 % 10;
           power = 1;
           for(int i=1;i<=count;i++){
               power = power*digit;
           }
          sum = sum + power;
          n1 = n1 / 10;
        }

    if(n2==sum) printf("Armstrong Number");
    else printf("Not a Armstrong Number");
}

 return 0;
}