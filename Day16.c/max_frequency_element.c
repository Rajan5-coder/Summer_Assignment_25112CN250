#include<stdio.h>
 int main(){
    int arr[10] = {1,5,7,1,6,1,9,3,5,2};
    int i,count,max_element,max=0;
    int n = 10;

    for(int i=0;i<n;i++){
        count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            max = count;
            max_element = arr[i];
        }
    }

    printf("Max frequency element = %d",max_element);

 return 0;
}