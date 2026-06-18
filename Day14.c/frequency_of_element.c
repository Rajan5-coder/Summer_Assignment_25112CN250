#include<stdio.h>
 int main(){
    int n,x,i,arr[100],count=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter search element: ");
    scanf("%d",&x);

    printf("Enter elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        if(x==arr[i]) count++;
        else continue;
    }
    printf("%d is = %d times",x,count);
 return 0;
}