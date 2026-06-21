#include<stdio.h>
 int main(){
    int a[50][50],b[50][50],c[50][50];
    int r1,r2,c1,c2;

    printf("Enter row and column of 1st matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter element: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }


    printf("Enter row and column of 2nd matrix: ");
    scanf("%d%d",&r2,&c2);
    printf("Enter element: \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }


    if(r2!=c1) printf("A x B not exist: ");
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j] = 0;
            for(int k=0;k<r2;k++){
               c[i][j] += a[i][k]*b[k][j];
            }           
        }
    }
    
    printf("\nA*B is : \n");

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    
 return 0;
}