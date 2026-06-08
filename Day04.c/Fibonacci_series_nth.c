#include<stdio.h>
 int main(){
    int n,f,a,b;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    f = 0;
    a = 0;
    b = 1;
    for(int i=1;i<=n;i++){
        printf("%d ",f);
        f = a + b;
        b = a;
        a = f;
    }

 return 0;
}