#include<stdio.h>
 int main(){
    int n,binary[100],i=0,bit=0;
    printf("Enter Decimal number: ");
    scanf("%d",&n);

    while(n>0){
        binary[i] = n % 2;
        if(binary[i]==1){
            bit++;
        }
        n = n / 2;
        i++;     
    }
    printf("Binary = ");
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }

    printf("\nNumber of bit is = %d",bit);
 return 0;
}