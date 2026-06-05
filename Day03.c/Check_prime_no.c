#include<stdio.h>
 int main(){
    int n,flag=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n<=1) printf("Not a Prime Number");
    else{  
     for(int i=2;i<n;i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag==0) printf("Prime Number ");
    else printf("Not a Prime Number ");
}
 return 0;
}