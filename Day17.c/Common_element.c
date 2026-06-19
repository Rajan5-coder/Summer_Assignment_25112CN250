#include<stdio.h>
 int main(){ 
    int m,n;

    printf("Size of 1st array: ");
    scanf("%d",&m);
    int a[m];
    printf("Enter 1st array element: \n");
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }

    printf("Size of 2nd array: ");
    scanf("%d",&n);
    int b[n];
    printf("Enter 2nd array element: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    int c[m+n];
    for(int i=0;i<m;i++){
        c[i] = a[i]; 
    }

    for(int i=0;i<n;i++){
        c[m+i] = b[i]; 
    }

    printf("Common element in array: \n");
    int found;
    for(int i=0;i<(m+n);i++){
         found = 0;
        for(int j=i+1;j<m+n;j++){
            if(c[i]==c[j]){
              found = 1;         
            }
        }
        
        if(found==1){
           printf("%d ",c[i]);
       } 
    }

 return 0;
}