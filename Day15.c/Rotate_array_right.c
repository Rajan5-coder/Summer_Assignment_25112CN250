#include<stdio.h>
 int main(){
    int n,temp,arr[50];
    printf("Enter size of array: ");
    scanf("%d",&n);
     
    printf("Enter element: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int rightshift_times;
    printf("Enter no. of right shift: ");
    scanf("%d",&rightshift_times);

    for(int j=1;j<=rightshift_times;j++){
        temp = arr[n-1];
        for(int i=n-1;i>=0;i--){
           arr[i] =  arr[i-1]; 
        }
        arr[0] = temp;
    }

    printf("Right shifted array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
 return 0;
}