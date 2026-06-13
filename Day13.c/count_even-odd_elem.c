#include<stdio.h>
 int main(){
    int n,arr[100];
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter element of array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int odd_count=0,even_count=0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }

    printf("Even elements = %d\nOdd elements = %d",even_count,odd_count);
 return 0;
}