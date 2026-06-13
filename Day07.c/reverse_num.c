#include<stdio.h>

void rev(int n){
    int reverse[100];
    int i=0;
    while(n>0){
        reverse[i] = n % 10;
        n = n / 10;
        i++;
    }
     printf("Reverse No.: ");
     for(int j=0;j<i;j++){
        printf("%d",reverse[j]);
     }
}

 int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    rev(n);
 return 0;
}