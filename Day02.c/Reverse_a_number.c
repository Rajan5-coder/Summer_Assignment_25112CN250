#include<stdio.h>
 int main(){
    int n,i,rev[100];
    printf("Enter number: ");
    scanf("%d",&n); 
    i = 0;
    while(n>0){
        rev[i] = n % 10;
        n /= 10;
        i +=1;
    }

    printf("Reverse = ");
    for(int j=0;j<i;j++){
        printf("%d",rev[j]);
    }
 return 0;
}