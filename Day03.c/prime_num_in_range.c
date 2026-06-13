#include<stdio.h>
 int main(){
    int m,n,flag;
    printf("Enter starting range: ");
    scanf("%d",&m);
    printf("Enter ending range: ");
    scanf("%d",&n);
    for(int i=m;i<=n;i++){
        if(i==0 || i==1){
            continue;
        }

        flag=0;
        
        for(int j=2;j<=i/2;j++){
            if(i%j == 0 ){
               flag = 1;
               break;
            }
        }

        if(flag==0){
            printf("%d ",i);
        }
    }



 return 0;
}