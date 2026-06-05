#include<stdio.h>
 int main(){
    int a,b,max,LCM;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    max = (a>b) ? a : b ;

    while(1){
        if(max % a == 0 && max % b == 0){
            LCM = max;
            break;
        }
        ++max;
    }
    printf("LCM = %d",LCM);
 return 0;
}