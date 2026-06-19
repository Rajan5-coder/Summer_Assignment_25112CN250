#include<stdio.h>
 int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{9,2,6},{1,12,3},{5,1,2}};

    printf("Matrix a + b : \n");
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
         a[i][j] = a[i][j] + b[i][j];
         printf("%d ",a[i][j]);
      }
       printf("\n");
    }
 return 0;
}