#include<stdio.h>
 int main(){
    int count,k=0,arr[100] = {1,2,6,3,4,1,8,5,1,4};

    for(int i=0;i<9;i++){
        count = 0;
      if(k==arr[i]) continue;
      else{
       for(int j=i+1;j<9;j++){
         if(arr[i]==arr[j]){
             count = 1;
             k = arr[i];
            }
        }
      }
       
       if(count==1) printf("Duplicate = %d\n",arr[i]);
    }
 return 0;
}