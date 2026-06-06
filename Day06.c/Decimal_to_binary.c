#include<stdio.h>
 int main(){
    int n,binary=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(n>0){
        binary = binary*10 + n % 2;
        n = n / 2;
    } 
    printf("\n%d",binary);
 return 0;
}



