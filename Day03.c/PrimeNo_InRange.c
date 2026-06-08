#include<stdio.h>
 int main(){
    int m,n,flag;
    printf("Enter the value of m:"); // lower value
    scanf("%d",&m);
    printf("Enter the value of n:"); // upper value
    scanf("%d",&n);

    for(int i=m;i<=n;i++){
          if(i==1 || i==0) continue;
          flag = 0;
        for(int j=2;j<=i/2;j++){
            if(i % j == 0){
                flag = 1;
            }
        }
        if(flag == 0) printf("%d ",i);
    }
  
 return 0;
}