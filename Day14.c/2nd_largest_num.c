#include<stdio.h>
 int main(){
    int n,arr[50];
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enetr element: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max1,max2;
    max1 = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > max1){
             max2 = max1;
             max1 = arr[i];
        } 
        else if(arr[i] > max2){
            max2 = arr[i];
        }
    }

    printf("%d",max2);
 return 0;
}