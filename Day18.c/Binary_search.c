#include<stdio.h>
 int main(){
    int n,x,arr[50];
    printf("Enter size of arry: ");
    scanf("%d",&n); 

    printf("Enter element: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter search element: ");
    scanf("%d",&x);

    int mid,last,first,flag=0;
    first = 0;
    last = n-1;
    mid = (first + last)/2;

    while(last >= first){

        mid = (first + last)/2;
        if(x > arr[mid]){
            first = mid + 1;
        }
        else if(x < arr[mid]){
            last = mid - 1;
        }
        else{
           flag = 1;
            break;
        }
    }

    if(flag==1) printf("Searched at indedx = %d",mid);
    else printf("Not searched");
 return 0;
}