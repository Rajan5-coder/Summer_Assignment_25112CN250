#include<stdio.h>
#include<string.h>

struct contact{
        char name[20];
        char mobile[20];
        char gmail[20];
        char  address[15];
    };

 int main(){
    
    struct contact l[100];
    int total_size = 2;
    
    strcpy(l[0].name, "Ramesh");
    strcpy(l[0].mobile, "9192939495");
    strcpy(l[0].gmail, "ramesh@gmail.com");
    strcpy(l[0].address, "Haryana");

    strcpy(l[1].name, "Amit");
    strcpy(l[1].mobile, "8182838485");
    strcpy(l[1].gmail, "amit@gmail.com");
    strcpy(l[1].address, "Ayodhya");

    int n_contact,option = 0;
    
    printf("\n>>>> Welcome to the Contact Management System! <<<<\n\n");
    while(option != 6){

        printf("Choose an option: \n");
        printf("1.Add contact\n");
        printf("2.View all contacts\n");
        printf("3.Search contact\n");
        printf("4.Update contact\n");
        printf("5.Delete contact\n");
        printf("6.Exit\n");
        printf("Enter your option: ");
        scanf("%d",&option);

        if(option == 1){
            printf("How many Contacts you want to add? : ");
            scanf("%d",&n_contact);

            for(int i=total_size; i<(total_size+n_contact); i++){
                printf("Enter name: ");
                scanf("%s",l[i].name);
                printf("Enter Mobile no.: ");
                scanf("%s",l[i].mobile);
                printf("Enter G-mail: ");
                scanf("%s",l[i].gmail);
                printf("Enter Address: ");
                scanf("%s",l[i].address);
            }
            printf("\n\n--> Contact Added Successfully!\n\n");
            total_size += n_contact;
        }

        else if(option == 2){
            if(total_size == 0) printf("\n--> Ohh!!\n--> There is no any Contact!\n\n");
            else{
                printf("\n\nShowing Contacts ...\n\n");
                for(int i=0; i<total_size; i++){
                    printf("Name--> %s\n",l[i].name);
                    printf("Mobile No.-> %s\n",l[i].mobile);
                    printf("G-mail--> %s\n",l[i].gmail);
                    printf("Address--> %s\n\n",l[i].address);
                }
                printf("\n--> Contact viewed successfully!\n\n");
            }
        }

        else if(option == 3){
            char name[10];
            int target = -1;
            printf("Enter Name: ");
            scanf("%s",name);

            for(int i=0; i<total_size; i++){
                if(strcmp(name,l[i].name) == 0){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Sorry!!\n--> There is no any Contact !\n\n");                
            }else{
                printf("\nName--> %s\n",l[target].name);
                    printf("Mobile No.-> %s\n",l[target].mobile);
                    printf("G-mail--> %s\n",l[target].gmail);
                    printf("Address--> %s\n\n",l[target].address);
            }            
        }

        else if(option == 4){
            char name[10];
            int target = -1;
            printf("Enter Name: ");
            scanf("%s",name);

            for(int i=0; i<total_size; i++){
                if(strcmp(name,l[i].name) == 0){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Sorry!!\n--> There is no any Contact!\n\n");                
            }else{
                printf("\n--> Please, Update Contact details >>\n\n");
                printf("Enter name: ");
                scanf("%s",l[target].name);
                printf("Enter Mobile no.: ");
                scanf("%s",l[target].mobile);
                printf("Enter G-mail: ");
                scanf("%s",l[target].gmail);
                printf("Enter Address: ");
                scanf("%s",l[target].address);
                printf("\n--> Contact Updated successfully!\n\n");
            }
        }

        else if(option == 5){
            char name[10];
            int target = -1;
            printf("Enter Name: ");
            scanf("%s",name);

            for(int i=0; i<total_size; i++){
                if(strcmp(name,l[i].name) == 0){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Sorry!!\n--> There is no any Contact!\n\n");                
            }else{
                for(int i=target; i<total_size-1; i++){
                    l[i] = l[i+1];
                }
                total_size--;
                printf("\n--> Contact Deleted Successfully !!\n\n");
            }
        }

        else if(option == 6){
            printf("Thank you !!");
        }
    }

 return 0;
}