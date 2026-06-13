#include<stdio.h>

void perfect(int n){
    int n1,i,sum=0;
    n1 = n;
    if(n<=0) printf("Warning : Please enter positive integer");
    else{
        for(int i=1;i<n;i++){
            if(n % i == 0){
                sum += i;
            }
        }
        
        if(sum==n1) printf("Perfect Number");
        else printf("Not a Perfect Number");
    }  
}


 int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    perfect(n);
    
 return 0;
}