#include<stdio.h>
 int main(){
    int a,b,f,n;
    printf("Enter number: ");
    scanf("%d",&n);
    f = 0;
    a = 1;
    b = 0;
    for(int i=1;i<=n;i++){
        printf("%d ",f);
        f = a + b;
        a = b;
        b = f;
    }


 return 0;
}