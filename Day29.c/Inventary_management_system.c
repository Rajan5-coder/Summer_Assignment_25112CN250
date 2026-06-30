#include<stdio.h>
#include<string.h>

struct inventary{
        int product_id;
        char name[20];
        int quantity;
        float price;
    };

 int main(){
    
    struct inventary l[100];
    int total_size = 2;
    
    l[0].product_id = 101;
    strcpy(l[0].name, "Rice");
    l[0].quantity = 50;
    l[0].price = 2500;
    

   l[1].product_id = 102;
    strcpy(l[1].name, "Suger");
    l[1].quantity = 22;
    l[1].price = 3500;

    int n_product,option = 0;
    
    printf("\n>>>> Welcome to the library! <<<<\n\n");
    while(option != 8){

        printf("Choose an option: \n");
        printf("1.Add New Product\n");
        printf("2.Display all Product\n");
        printf("3.Search Product\n");
        printf("4.Update Product details\n");
        printf("5.Delete Product\n");
        printf("6.Purchase Product\n");
        printf("7.Sell Product\n");
        printf("8.Exit\n");
        printf("Enter your option: ");
        scanf("%d",&option);

        if(option == 1){
            printf("How many Product you want to add? : ");
            scanf("%d",&n_product);

            for(int i=total_size; i<(total_size+n_product); i++){
                printf("Enter Product id: ");
                scanf("%d",&l[i].product_id);
                printf("Enter Product name: ");
                scanf("%s",l[i].name);
                printf("Enter Product quantity: ");
                scanf("%d",&l[i].quantity);
                printf("Enter Product price: ");
                scanf("%f",&l[i].price);
                
            }
            printf("\n\n--> Product added successfully!\n\n");
            total_size += n_product;
        }

        else if(option == 2){
            if(total_size == 0) printf("\n--> Ohh!!\n--> Empty Inventary !\n\n");
            else{
                printf("\n\nShowing Product ....\n\n");
                for(int i=0; i<total_size; i++){
                    printf("Product ID--> %d\n",l[i].product_id);
                    printf("Name--> %s\n",l[i].name);
                    printf("Quantity Available--> %d\n",l[i].quantity);
                    printf("Price--> %f\n\n",l[i].price);
                }
                printf("--> Product viewed successfully!\n\n");
            }
        }

        else if(option == 3){
            int id,target = -1;
            printf("Enter Product id: ");
            scanf("%d",&id);

            for(int i=0; i<total_size; i++){
                if(id == l[i].product_id){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Sorry!!\n--> Product not found!\n\n");                
            }else{
                printf("\nProduct ID--> %d\n",l[target].product_id);
                    printf("Name--> %s\n",l[target].name);
                    printf("Quantity--> %d\n",l[target].quantity);
                    printf("Price--> %f\n\n",l[target].price);
            }
            printf("--> Product Searched successfully!\n\n");            
        }

        else if(option == 4){
            int id,target = -1;
            printf("Enter Product id: ");
            scanf("%d",&id);

            for(int i=0; i<total_size; i++){
                if(id == l[i].product_id){
                    target = i;
                    break;
                }
            }
            if(target == -1){
                printf("\n\n--> Sorry!!\n--> Product not found!\n\n");                
            }else{
                 printf("Enter Product id: ");
                scanf("%d",&l[target].product_id);
                printf("Enter Product name: ");
                scanf("%s",l[target].name);
                printf("Enter Product quantity: ");
                scanf("%d",&l[target].quantity);
                printf("Enter Product price: ");
                scanf("%f",&l[target].price);
            }
            printf("\n--> Updateded successfully!\n\n");
        }

        else if(option == 5){
            int id,target = -1;
            printf("\nEnter Product id: ");
            scanf("%d",&id);

            for(int i=0; i<total_size; i++){
                if(id == l[i].product_id){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Sorry!!\n--> Product not found!\n--> Enter correct id\n\n");                
            }else{
                for(int i=target; i<total_size; i++){
                    l[i] = l[i+1];
                }
                total_size--;
                printf("\n--> Product deleted successfully!\n\n");
            }
        }

        else if(option == 6){
            int id,target = -1;
            printf("Enter Product id: ");
            scanf("%d",&id);

            for(int i=0; i<total_size; i++){
                if(id == l[i].product_id){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Sorry!!\n--> Product not found!\n--> Enter correct id\n\n");                
            }
            else if(l[target].quantity > 0){
                printf("\n\n--> Product Purchased successfully!\n\n");
                l[target].quantity++;
            }
            else printf("\n--> Sorry!!\n--> Product out of stock\n\n");

            
        }

        else if(option == 7){
            int id,target = -1;
            printf("Enter Product id: ");
            scanf("%d",&id);

            for(int i=0; i<total_size; i++){
                if(id == l[i].product_id){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Not found!!\n--> Enter correct id\n\n");                
            }else l[target].quantity--;

            printf("\n\n--> Product selled successfully!\n\n");
        }

        else if(option == 8){
            printf("Thank you !!");
        }
    }

 return 0;
}