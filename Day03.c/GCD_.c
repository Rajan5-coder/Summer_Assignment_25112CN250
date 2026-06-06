#include<stdio.h>
 int main(){
    int a,b,max,LCM,GCD;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    max = (a > b) ? a : b ;
    while(1){
        if(max % a == 0 && max % b == 0){
            LCM = max;
            break;
        }
        ++max;
    }
    GCD = (a*b)/LCM;
    printf("GCD = %d",GCD);
 return 0;
}