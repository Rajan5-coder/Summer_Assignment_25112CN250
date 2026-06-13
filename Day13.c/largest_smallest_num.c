#include<stdio.h>
 int main(){
    int n,arr[100],max,min;
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter element of array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("Largest No. is = %d\nSmallest No. is = %d",max,min);

   
 return 0;
}