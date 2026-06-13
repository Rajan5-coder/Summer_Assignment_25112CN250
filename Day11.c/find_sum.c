#include<stdio.h>

int sum(int a,int b){
    return a + b;
}

 int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    printf("Sum = %d",sum(a,b));

 return 0;
}