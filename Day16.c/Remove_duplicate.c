#include<stdio.h>
 int main(){
    int n,a[50];
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter array element: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int count;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
               for(int k=j;k<n;k++){
                    a[k] = a[k+1];
               }
               n--;
               j--;
            }           
        }
    }
    
    printf("Final array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);

    }
 return 0;
}   