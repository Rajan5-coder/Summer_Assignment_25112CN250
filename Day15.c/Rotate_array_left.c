#include<stdio.h>
 int main(){
    int n,temp,arr[50];
    printf("Enter size of array: ");
    scanf("%d",&n);
     
    printf("Enter element: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int leftshift_times;
    printf("Enter no. of left shift: ");
    scanf("%d",&leftshift_times);

    for(int j=1;j<=leftshift_times;j++){
        temp = arr[0];
        for(int i=0;i<n;i++){
           arr[i] =  arr[i+1]; 
        }
        arr[n-1] = temp;
    }

    printf("Left shifted array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
 return 0;
}