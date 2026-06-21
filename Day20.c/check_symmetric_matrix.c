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

    int flag=1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(arr[i][j] != arr[j][i]){
                flag = 0;
                break;
           }
        }
    }

    if(flag == 1) printf("Symmetric Matrix");
    else printf("Un-Symmetric Matrix");          
           
 return 0;
}