#include<stdio.h>
 int main(){
    int balance = 1200;
    int option;

    int deposite_money, withdrawl_money;

    while(1){
        printf("Choose an option: \n");
        printf("1. Check balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Enter option: ");
        scanf("%d",&option);
        switch(option){
            case 1 : 
                printf("\nNet balance = %d/-\n\n",balance);
                break;
            case 2 : 
                printf("Enter Deposite money: \n");
                scanf("%d",&deposite_money);
                balance = balance + deposite_money;
                printf("Net balance = %d/-\n\n",balance);
                break;
            case 3 :
                printf("Enter withdrawl money: \n");
                scanf("%d",&withdrawl_money); 
                if(withdrawl_money <= balance){
                    balance = balance - withdrawl_money;
                    printf("Net balance = %d/-\n\n",balance);
                }else printf("Ohhh!\nInsufficient Balance!\n\n");
                break;
            case 4 : 
                printf("Thank you");
                return 0;
        }
    }
    
 return 0;

}