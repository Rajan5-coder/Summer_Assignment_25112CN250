#include<stdio.h>
 int main(){
    int n,binary[100],i=0;
    printf("Enter Decimal number: ");
    scanf("%d",&n);

    while(n>0){
        binary[i] = n % 2;
        n = n / 2;
        i++;     
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
 return 0;
}