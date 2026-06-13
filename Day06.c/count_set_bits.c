#include<stdio.h>
 int main(){
    int n,binary[100];
    printf("Enter Decimal number: ");
    scanf("%d",&n);
    int i = 0, count = 0;
   while(n>0){     
      binary[i] = n % 2;
      if(binary[i]==1){
        count++;
      }
      n = n / 2;
      i++;
    }
   printf("Binary number: ");
    for(int j=i-1;j>=0;j--){
      printf("%d",binary[j]);
    }

    printf("\nNo. of bits = %d",count);

    
 return 0;
}