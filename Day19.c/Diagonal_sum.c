#include<stdio.h>
 int main(){
    int n,arr[50][50];
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter element: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum += arr[i][j];
            }
        }
    }

    printf("Diagonal sum = %d",sum);

 return 0;
}