#include<stdio.h>
 int main(){
    int n,count=0;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n<=1) printf("Not a Prime Number");
    else{
       for(int i=2;i<n;i++){
           if(n % i == 0){
              count += 1;
           }
       }

    if(count == 0) printf("Prime Number");
    else printf("Not a Prime Number");
}
 return 0;
}   