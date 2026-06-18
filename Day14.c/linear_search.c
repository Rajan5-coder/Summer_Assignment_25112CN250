#include<stdio.h>
 int main(){
    int n,x,j,arr[100],flag=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter search element: ");
    scanf("%d",&x);
    
    printf("Enter elements: \n");
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(j=0;j<n;j++){
        if(x==arr[j]) {
            flag = 1;
            break;
        }
        else flag = 0;
    }

    if(flag==1) printf("Founded on index %d",j);
    else printf("Not found");


 return 0;
}