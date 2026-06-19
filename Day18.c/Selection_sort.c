#include<stdio.h>
 int main(){
    int n,arr[50];
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter element: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int min,temp;
    for(int i=0;i<n;i++){
        min = arr[i];
        for(int j=i+1;j<n;j++){
            if(min > arr[j]){
                min = arr[j];

                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }                      
        }              
    }

    printf("Sorted array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
 return 0;
}