#include<stdio.h>

int pwr(int x,int n){
    int power=1;
    for(int i=1;i<=n;i++){
        power = power*x;
    }
    return power;
}

void arm(int n){
    int count=0,digit,sum=0;
    int n2,n1;

    n2 = n1 = n;
  if(n<=0) printf("Warning : Please enter positive integer");
  else{
    while(n>0){
        count++;
        n /= 10;    
    }

    while(n1>0){
        int power;
        digit = n1 % 10;
        sum += pwr(digit,count);
        n1 /= 10;      
    }
    if(sum == n2) printf("Armstrong Number");
    else printf("Not a armstrong number");
   }
}


 int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n); 
    arm(n);

 return 0;
}