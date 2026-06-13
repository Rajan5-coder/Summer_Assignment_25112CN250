#include<stdio.h>
 int main(){
    int a,b,f,n;
    printf("Enter number: ");
    scanf("%d",&n);
    f = 0;
    a = 1;
    b = 0;

    if(n==1) printf("Fib(%d) = %d",n,f);
    else{
        for(int i=2;i<=n;i++){
           f = a + b;
           a = b;
           b = f;
        }

        printf("Fib(%d) = %d ",n,f);
    }


 return 0;
}