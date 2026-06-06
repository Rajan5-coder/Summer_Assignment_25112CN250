#include<stdio.h>
 int main(){
    int n,i,d,count=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        count++;
        n=n/10;
    }
    printf("NO. of digit is %d",count);
 return 0;
}