#include<stdio.h>
#include<string.h>

struct bank{
        char account_no[20];
        char name[20];
        char account_type[20];
        char  mobile[15];
        float balance;
    };

 int main(){
    
    struct bank l[100];
    int total_size = 2;
    
    strcpy(l[0].account_no, "12345678901");
    strcpy(l[0].name, "Ramesh");
    strcpy(l[0].account_type, "Saving");
    strcpy(l[0].mobile, "1234567890");
    l[0].balance = 10000;

    strcpy(l[1].account_no, "98765432101");
    strcpy(l[1].name, "Suresh");
    strcpy(l[1].account_type, "Saving");
    strcpy(l[1].mobile, "9876543210");
    l[1].balance = 150000;

    int n_account,option = 0;
    
    printf("\n>>>> Welcome to the Bank! <<<<\n\n");
    while(option != 9){

        printf("Choose an option: \n");
        printf("1.Creat Account\n");
        printf("2.View Account\n");
        printf("3.Search Account\n");
        printf("4.Update Account\n");
        printf("5.Delete Account\n");
        printf("6.Deposite Money\n");
        printf("7.Withdraw Money\n");
        printf("8.Check Balance\n");
        printf("9.Exit\n");
        printf("Enter your option: ");
        scanf("%d",&option);

        if(option == 1){
            printf("How many account you want to create : ");
            scanf("%d",&n_account);

            for(int i=total_size; i<(total_size+n_account); i++){
                printf("Enter Account number: ");
                scanf("%s",l[i].account_no);
                printf("Enter name: ");
                scanf("%s",l[i].name);
                printf("Enter Account type: ");
                scanf("%s",l[i].account_type);
                printf("Enter mobile: ");
                scanf("%s",&l[i].mobile);
                printf("Enter Amount: ");
                scanf("%f",&l[i].balance);
            }
            printf("\n\n--> Account createded successfully!\n\n");
            total_size += n_account;
        }

        else if(option == 2){
            if(total_size == 0) printf("\n--> Ohh!!\n--> There is not any account !\n\n");
            else{
                printf("\n\nShowing Accounts ....\n\n");
                for(int i=0; i<total_size; i++){
                    printf("Account number--> %s\n",l[i].account_no);
                    printf("Name--> %s\n",l[i].name);
                    printf("Account type--> %s\n",l[i].account_type);
                    printf("Mobile No.--> %s\n",l[i].mobile);
                    printf("Total Amount--> %f\n\n",l[i].balance);
                }
                printf("--> Account viewed successfully!\n\n");
            }
        }

        else if(option == 3){
            char account_num[20];
            int target = -1;
            printf("Enter Account No.: ");
            scanf("%s",account_num);

            for(int i=0; i<total_size; i++){
                if(strcmp(account_num,l[i].account_no) == 0){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Sorry!!\n--> Account not found!\n\n");                
            }else{
                printf("\nAccount number--> %s\n",l[target].account_no);
                printf("Name--> %s\n",l[target].name);
                printf("Account type--> %s\n",l[target].account_type);
                printf("Mobile No.--> %s\n",l[target].mobile);
                printf("Total Amount--> %f\n\n",l[target].balance);
                printf("--> Account searched successfully!\n\n");
            }            
        }

        else if(option == 4){
            char account_num[20];
            int target = -1;
            printf("Enter Account No.: ");
            scanf("%s",account_num);

            for(int i=0; i<total_size; i++){
                if(strcmp(account_num,l[i].account_no) == 0){
                    target = i;
                    break;
                }
            }
            if(target == -1){
                printf("\n\n--> Sorry!!\n--> Account not found!\n\n");                
            }else{
                printf("Account update: \n\n");
                printf("Enter name: ");
                scanf("%s",l[target].name);
                printf("Enter Account type: ");
                scanf("%s",l[target].account_type);
                printf("Enter mobile: ");
                scanf("%s",&l[target].mobile);
                printf("\n--> Account Updateded successfully!\n\n");
            }
        }

        else if(option == 5){
            char account_num[20];
            int target = -1;
            printf("Enter Account No.: ");
            scanf("%s",account_num);

            for(int i=0; i<total_size; i++){
                if(strcmp(account_num,l[i].account_no) == 0){
                    target = i;
                    break;
                }
            }
            if(target == -1){
                printf("\n\n--> Sorry!!\n--> Account not found!\n\n");                
            }else{
                for(int i=target; i<total_size-1; i++){
                    l[i] = l[i+1];
                }
                total_size--;
                printf("\n--> Account deleted successfully!\n\n");
            }
        }

        else if(option == 6){
            char account_num[20];
            int depo_amount, target = -1;
            printf("Enter Account No.: ");
            scanf("%s",account_num);

            for(int i=0; i<total_size; i++){
                if(strcmp(account_num,l[i].account_no) == 0){
                    target = i;
                    break;
                }
            }
            if(target == -1){
                printf("\n\n--> Sorry!!\n--> Account not found!\n\n");                
            }else{
                printf("Enter Deposite Amount: ");
                scanf("%d",&depo_amount);
                l[target].balance += depo_amount;
                printf("\n\n--> Account Deposited successfully!\n\n");
               
            }
            
        }

        else if(option == 7){
            char account_num[20];
            int withd_amount, target = -1;
            printf("Enter Account No.: ");
            scanf("%s",account_num);

            for(int i=0; i<total_size; i++){
                if(strcmp(account_num,l[i].account_no) == 0){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Not found!!\n--> Enter correct account No.\n\n");                
            }else{
                printf("Enter Withdraw Amount: ");
                scanf("%d",&withd_amount);
                if(withd_amount <= l[target].balance){
                    l[target].balance -= withd_amount;
                    printf("\n\n--> Account withdraw successfully!\n\n");               
                }else printf("\n--> Insufficient Balance\n\n");
            }
        }

        else if(option == 8){
            char account_num[20];
            int target = -1;
            printf("Enter Account No.: ");
            scanf("%s",account_num);

            for(int i=0; i<total_size; i++){
                if(strcmp(account_num,l[i].account_no) == 0){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Not found!!\n--> Enter correct account No.\n\n");                
            }else{
                printf("\nAccount number--> %s\n",l[target].account_no);
                printf("Name--> %s\n",l[target].name);
                printf("Total Amount--> %f\n\n",l[target].balance);
                printf("\n\n--> Account checked successfully!\n\n");
            }
        }

        else if(option == 9){
            printf("Thank you !!");
        }
    }

 return 0;
}