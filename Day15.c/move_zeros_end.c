#include<stdio.h>
 int main(){
    int n,temp,arr[50];
    printf("Enter size of array: ");
    scanf("%d",&n);
     
    printf("Enter element: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 

    for(int i=0;i<n;i++){
      if(arr[i]==0){
        for(int j=i;j<n-1;j++){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    if(arr[0]==0) i--;
}

    printf("Final array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
 return 0;
}