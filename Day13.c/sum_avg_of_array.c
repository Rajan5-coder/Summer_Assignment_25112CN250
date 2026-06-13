#include<stdio.h>
 int main(){
    int n,arr[100];
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    int sum=0,avg;

    printf("Enter element of array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    avg = sum / n;

    printf("Sum = %d\nAvg = %d",sum,avg);
    
 return 0;
}