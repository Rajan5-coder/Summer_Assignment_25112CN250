#include<stdio.h>
 int main(){
    int n,arr[50];
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter element: \n");
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
    }
    
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("Sorted array: \n");
     for(int i=0;i<n;i++){
         printf("%d ",arr[i]);
    }
    
 return 0;
}