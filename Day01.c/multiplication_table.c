#include<stdio.h>
 int main(){
    int n,multi=1;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        multi = n*i;
        printf("\n%d * %d = %d",n,i,multi);
    }

 return 0;
}