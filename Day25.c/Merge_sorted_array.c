#include<stdio.h>
 int main(){
    int a[20],b[20],c[40];
    int n,m;
    
    printf("Enter size of 1st array: ");
    scanf("%d",&n);
    printf("Enter 1st array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter size of 2nd array: ");
    scanf("%d",&m);
    printf("Enter 2nd array: \n");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    
    int i=0,j=0,k=0;
    while(i<n && j<m){
           if(a[i]<b[j]){
            c[k] = a[i];
            i++;
            }else{
            c[k] = b[j];
            j++;
            }
        k++;
    }
    while(j<m){
        c[k] = b[j];
        j++;
        k++;
    }
    
    printf("Final Array: \n");
    for(int i=0;i<m+n;i++){
        printf("%d ",c[i]);
    }

  return 0;
}