#include<stdio.h>
 int main(){
    int n,arr[50];
    int i,temp;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter element: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0,j=n-1;i<j;i++,j--){
       temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
    }

    printf("Reversed array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
 return 0;
}