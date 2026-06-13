#include<stdio.h>

void max(int a,int b){
    int max = (a>b) ? a : b;
     printf("max = %d",max);
}

 int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    max(a,b);
   
 return 0;
}