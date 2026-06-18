#include<stdio.h>
 int main(){
    int arr[9] = {1,2,3,5,6,7,8,9,10};
    int sum=0,missing_num;
    int n = 9;

    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    
    missing_num = ((n+1)*(n+2)/2)- sum;
    printf("Missing number is = %d",missing_num);
    
 return 0;
}