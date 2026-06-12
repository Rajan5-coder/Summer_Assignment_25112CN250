#include<stdio.h>
 int main(){
    int n,fac=1;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n<0) printf("Negative Number");
    else {
       for(int i=1;i<=n;i++){
          fac *= i;
       }
       printf("%d! = %d",n,fac);
    }


 return 0;
}