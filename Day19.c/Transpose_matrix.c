#include<stdio.h>
 int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{5,9,3}};

    printf("Original Matrix: \n");
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
         printf("%d ",a[i][j]);
      }
       printf("\n");
    }

    printf("Transpose Matrix: \n");
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        printf("%d ",a[j][i]);
      }
       printf("\n");
    }
 return 0;
}