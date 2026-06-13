#include<stdio.h>

void fib(int n){ 
    int b = 0; 
    int a = 1;
    int f = 0;

    for(int i=1;i<=n;i++){
        printf("%d ",f);
        f = a + b;
        a = b;
        b = f;
    }
}
 int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    fib(n);
 return 0;
}