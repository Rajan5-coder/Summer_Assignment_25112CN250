#include<stdio.h>
 int main(){
    int n,sum,arr[50];
    printf("Enter size of array: ");
    scanf("%d",&n);
   
    printf("Enter array element: \n");
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
        }

    printf("Input sum: ");
    scanf("%d",&sum);

    printf("Pair : \n");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("%d,%d\n",arr[i],arr[j]);
            }
        }
    }
 return 0;
}