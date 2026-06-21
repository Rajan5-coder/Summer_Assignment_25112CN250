#include<stdio.h>
 int main(){
    int n,arr[50][50];
    int i,j;
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter element: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++){
        int sum=0;
        for(j=0;j<n;j++){
            sum += arr[i][j];
        }
        printf("Sum(R%d) = %d\n",(i+1),sum);
    }


 return 0;
}