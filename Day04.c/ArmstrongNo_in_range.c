#include<stdio.h>
 int main(){
    int temp,temp1,count,digit,power,sum;
    int m,n;
    printf("Enter starting range: ");
    scanf("%d",&m);
    printf("Enter ending range: ");
    scanf("%d",&n);

    for(int i=m;i<=n;i++){
        temp1 = temp = i;
        
        if(n<0) printf("-ve number");
        else{

        count = 0;
        while(temp>0){
           count++;
           temp = temp / 10;
        }
        
        sum = 0;
        while(temp1>0){
           digit = temp1 % 10;

           power = 1;
           for(int j=1;j<=count;j++){
               power = power*digit;
           }

          sum = sum + power;
          temp1 = temp1 / 10;
        }
    }

    if(sum==i) printf("%d ",i);
}
   

 return 0;
}