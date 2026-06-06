#include<stdio.h>
 int main(){
    int n=8,f,a,b;  // n=8
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