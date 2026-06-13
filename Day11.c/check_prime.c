#include<stdio.h>

void prime(int n){
    int count=0;

    if(n<=1) printf("Not a Prime Number");
    else{
        for(int i=2;i<n;i++){
             if(n%i==0) count++;       
        }

        if(count==0) printf("Prime Number");
        else printf("Not a Prime Number");
    }
}

 int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    prime(n);
 return 0;
}