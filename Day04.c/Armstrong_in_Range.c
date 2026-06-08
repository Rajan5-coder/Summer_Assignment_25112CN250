#include<stdio.h>
 int main(){
    int m,n,i,temp1,temp2,digit1,digit2,num_digit,pow,sum;
    printf("Enter the value of m and n: ");
    scanf("%d %d",&m,&n);
   
    for(int i=m;i<=n;i++){
          temp2 = temp1 = i;
          num_digit = 0;
          sum = 0;

        while(temp1>0){
           digit1 = temp1 % 10;
           num_digit += 1;
           temp1 /= 10;
        } 

        // printf("%d ",num_digit);
        while(temp2>0){
            digit2 = temp2 % 10;
            pow = 1;
            for(int k=1;k<=num_digit;k++){
                pow = pow*digit2;
            }
            sum = sum + pow;
            temp2 /= 10;
        }
    
        //  printf("%d = ",sum);
        if(sum == i) printf("%d ",i);
    }
    


 return 0;
}

