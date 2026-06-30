#include<stdio.h>
 int main(){
    int arr[100];
    int total_size = 0, option = 0;

    printf("\n>>>> Array Management System <<<<\n\n");
    
    while(option != 13){
        printf("Choose an option: \n");

        printf("1.Insert element\n");
        printf("2.Display array\n");
        printf("3.Search element\n");
        printf("4.Update element\n");
        printf("5.Delete element\n");
        printf("6.Find maximum element\n");
        printf("7.Find minimum element\n");
        printf("8.Sum of  elements\n");
        printf("9.Average of elements\n");
        printf("10.Sort array in Asending order\n");
        printf("11.Sort array in Descending order\n");
        printf("12.Reverse array\n");
        printf("13.Exit\n\n");

        printf("Enter an option: ");
        scanf("%d",&option);

        if(option == 1){
            printf("Enter size of array: ");
            scanf("%d",&total_size);
            printf("Enter elements: \n");
            for(int i=0; i<total_size; i++){
               scanf("%d",&arr[i]); 
            }
            printf("\n--> Element Inserd Successfully!\n\n");
        }

        else if(option == 2){
            printf("Array : \n");
            for(int i=0; i<total_size; i++){
               printf("%d ",arr[i]); 
            }
            printf("\n\n--> Array Displayed Successfully!\n\n");
        }
        
        else if(option == 3){
            int i,num,flag = 0;
            printf("Enter an element: ");
            scanf("%d",&num);
            for(i=0; i<total_size; i++){

                if(num == arr[i]){
                    flag = 1;
                    break;
                }
            
            } 
        
            if(flag == 1) printf("Element exist at the index %d\n\n",i);
            else printf("Element not exist!!\n\n");       
            
            printf("\n--> Element Searched Successfully!\n\n");
        }

        else if(option == 4){
            int index,n;
            printf("which index element you want to update: ");
            scanf("%d",&index);
            printf("Enter an element: ");
            scanf("%d",&n); 
            arr[index] = n;
            
            printf("\n--> Element Updated Successfully!\n\n");
        }

        else if(option == 5){
            int index,n;
            printf("which index element you want to delete: ");
            scanf("%d",&index);
            for(int i=index; i<total_size; i++){
                arr[i] = arr[i+1];
            }
            total_size--;
        
            printf("\n--> Element Deleted Successfully!\n\n");
        }

        else if(option == 6){
            int max=0;
            for(int i=0;i<total_size;i++){
                if(max < arr[i]){
                    max = arr[i];
                }
            }
            printf("Max. element = %d",max);
        
            printf("\n\n--> Max. element Finded Successfully!\n\n");
        }

        else if(option == 7){
            int min=0;
            for(int i=0;i<total_size;i++){
                if(min > arr[i]){
                    min = arr[i];
                }
            }
            printf("Min. element = %d",min);
        
            printf("\n\n--> Min. element Finded Successfully!\n\n");
        }

        else if(option == 8){
            int sum=0;
            for(int i=0;i<total_size;i++){
                sum += arr[i];
            }
            printf("Sum = %d",sum);
        
            printf("\n\n--> Sum Finded Successfully!\n\n");
        }

        else if(option == 9){
            float avg,sum=0;
            for(int i=0;i<total_size;i++){
                sum += arr[i];
            }

            avg = (float)sum / total_size; 
            printf("Average = %f",avg);
        
            printf("\n\n--> Averege Finded Successfully!\n\n");
        }

        else if(option == 10){
            for(int i=0;i<total_size;i++){
                for(int j=i+1;j<total_size;j++){
                    if(arr[i] > arr[j]){
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }

            for(int i=0;i<total_size;i++){
                printf("%d ",arr[i]);
            }
        
            printf("\n\n--> Array sorted(Asending Order) Successfully!\n\n");
        }

        else if(option == 11){
            for(int i=0;i<total_size;i++){
                for(int j=i+1;j<total_size;j++){
                    if(arr[i] < arr[j]){
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }

            for(int i=0;i<total_size;i++){
                printf("%d ",arr[i]);
            }
        
            printf("\n\n--> Array sorted(Descending Order) Successfully!\n\n");
        }

        else if(option == 12){
            int i,j;
            i=0, j=total_size-1;
            while(i <= j){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    i++;
                    j--;
                    
            }
        
            for(int i=0;i<total_size;i++){
                printf("%d ",arr[i]);
            }
        
            printf("\n\n--> Array Reversed Successfully!\n\n");
        }

        else if(option == 13){
            printf("\nThank yoy !!\n\n");
        }
        
    }
 return 0;
}