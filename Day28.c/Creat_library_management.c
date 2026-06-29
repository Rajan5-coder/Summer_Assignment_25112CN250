#include<stdio.h>
#include<string.h>

struct library{
        int id;
        char title[20];
        char author[20];
        float price;
        int quantity;
    };

 int main(){
    
    struct library l[100];
    int total_size = 2;
    
    l[0].id = 201;
    strcpy(l[0].title, "C Programming");
    strcpy(l[0].author, "Dennis Ritchie");
    l[0].price = 450;
    l[0].quantity = 10;

    l[1].id = 202;
    strcpy(l[1].title, "DSA in C");
    strcpy(l[1].author, "Reema Thareja");
    l[1].price = 550;
    l[1].quantity = 10;

    int n_book,option = 0;
    
    printf("\n>>>> Welcome to the library! <<<<\n\n");
    while(option != 8){

        printf("Choose an option: \n");
        printf("1.Add Book\n");
        printf("2.View all Book\n");
        printf("3.Search Book\n");
        printf("4.Update Book\n");
        printf("5.Delete Book\n");
        printf("6.Issue Book\n");
        printf("7.Return Book\n");
        printf("8.Exit\n");
        printf("Enter your option: ");
        scanf("%d",&option);

        if(option == 1){
            printf("How many book you want to add? : ");
            scanf("%d",&n_book);

            for(int i=total_size; i<(total_size+n_book); i++){
                printf("Enter book id: ");
                scanf("%d",&l[i].id);
                printf("Enter book title: ");
                scanf("%s",l[i].title);
                printf("Enter book Author: ");
                scanf("%s",l[i].author);
                printf("Enter book price: ");
                scanf("%f",&l[i].price);
                printf("Enter book quantity: ");
                scanf("%d",&l[i].quantity);
            }
            printf("\n\n--> Book added successfully!\n\n");
            total_size += n_book;
        }

        else if(option == 2){
            if(total_size == 0) printf("\n--> Ohh!!\n--> Empty library !\n\n");
            else{
                printf("\n\nShowing book ....\n\n");
                for(int i=0; i<total_size; i++){
                    printf("ID--> %d\n",l[i].id);
                    printf("Tital--> %s\n",l[i].title);
                    printf("Author--> %s\n",l[i].author);
                    printf("Price--> %f\n",l[i].price);
                    printf("Quantity Available--> %d\n\n",l[i].quantity);
                }
                printf("--> Books viewed successfully!\n\n");
            }
        }

        else if(option == 3){
            int id,target = -1;
            printf("Enter book id: ");
            scanf("%d",&id);

            for(int i=0; i<total_size; i++){
                if(id == l[i].id){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n-->Sorry!!\n-->Book not found!\n\n");                
            }else{
                printf("ID--> %d\n",l[target].id);
                printf("Tital--> %s\n",l[target].title);
                printf("Author--> %s\n",l[target].author);
                printf("Price--> %f\n",l[target].price);
                printf("Quantity Available--> %d\n\n",l[target].quantity);
            }
            printf("--> Searched successfully!\n\n");            
        }

        else if(option == 4){
            int id,target = -1;
            printf("Enter book id: ");
            scanf("%d",&id);

            for(int i=0; i<total_size; i++){
                if(id == l[i].id){
                    target = i;
                    break;
                }
            }
            if(target == -1){
                printf("\n\n-->Sorry!!\n-->Book not found!\n\n");                
            }else{
                printf("Updat book: \n");
                printf("Enter book title: ");
                scanf("%s",l[target].title);
                printf("Enter book Author: ");
                scanf("%s",l[target].author);
                printf("Enter book price: ");
                scanf("%f",&l[target].price);
                printf("Enter book quantity: ");
                scanf("%d",&l[target].quantity);
            }
            printf("\n--> Updateded successfully!\n\n");
        }

        else if(option == 5){
            int id,target = -1;
            printf("\nEnter book id: ");
            scanf("%d",&id);

            for(int i=0; i<total_size; i++){
                if(id == l[i].id){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n-->Sorry!!\n-->We not found!\n-->Enter correct id\n\n");                
            }else{
                for(int i=target; i<total_size; i++){
                    l[i] = l[i+1];
                }
                total_size--;
                printf("\n--> Book deleted successfully!\n\n");
            }
        }

        else if(option == 6){
            int id,target = -1;
            printf("Enter book id: ");
            scanf("%d",&id);

            for(int i=0; i<total_size; i++){
                if(id == l[i].id){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Sorry!!\n-->We not found!\n-->Enter correct id\n\n");                
            }
            else if(l[target].quantity > 0){
                printf("\n\n--> Book issued successfully!\n\n");
                l[target].quantity--;
            }
            else printf("\n--> Sorry!!\n--> Book out of stock\n\n");

            
        }

        else if(option == 7){
            int id,target = -1;
            printf("Enter book id: ");
            scanf("%d",&id);

            for(int i=0; i<total_size; i++){
                if(id == l[i].id){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n-->Not found!!\n-->Enter correct id\n\n");                
            }else l[target].quantity++;

            printf("\n\n--> Book returned successfully!\n\n");
        }

        else if(option == 8){
            printf("Thank you !!");
        }
    }

 return 0;
}