#include<stdio.h>
#include<string.h>

  struct salary_management
  {
    int id;
    char name[10];
    float basic_salary;
    float bonus;
    float deduction;
    float net_salary;
    char date[20];
    char status[10];
  };
 int main(){
    int n,option,total_size;
    option = 0;
    total_size = 2;
    
    struct salary_management e[100];

    e[0].id = 101;
    strcpy(e[0].name, "Shivam");
    e[0].basic_salary = 30000;
    e[0].bonus = 1000;
    e[0].deduction = 350;
    e[0].net_salary = (30000+1000-350);
    strcpy(e[0].date, "27-06-2026");
    strcpy(e[0].status, "Paid");

    e[1].id = 102;
    strcpy(e[1].name, "Naman");
    e[1].basic_salary = 55000;
    e[1].bonus = 2000;
    e[1].deduction = 500;
    e[1].net_salary = (55000+2000-500);
    strcpy(e[1].date, "15-06-2026");
    strcpy(e[1].status, "Unpaid");

    while(option != 5){
        printf("Choose an option: \n");
        printf("1.Add salary details\n");
        printf("2.View salary details\n");
        printf("3.Update salary details\n");
        printf("4.Delete salary details\n");
        printf("5.Exit\n\n");
        printf("Enter option: ");
        scanf("%d",&option);

        if(option == 1){
            printf("Enter no.of salary details to be record: ");
            scanf("%d",&n);
            printf("Enter salary details: \n");
            for(int i=total_size; i<total_size+n; i++){
                printf("Employee id: ");
                scanf("%d",&e[i].id);
                printf("Employee name: ");
                scanf("%s",e[i].name);
                printf("Employee basic salary: ");
                scanf("%f",&e[i].basic_salary);
                printf("Employee bonus: ");
                scanf("%f",&e[i].bonus);
                printf("Employee salary deduction: ");
                scanf("%f",&e[i].deduction);
                printf("Employee net salary: ");
                scanf("%f",&e[i].net_salary);
                printf("Status date: ");
                scanf("%s",e[i].date);
                printf("Salary status: ");
                scanf("%s",e[i].status);
            }
            printf("\n--> Record added successfully!\n\n");
            total_size += n;
        }

        else if(option == 2){
            int i,target=-1,id_num;
            printf("Enter employee's id: ");
            scanf("%d",&id_num);
                for(i=0;i<total_size;i++){
                    if(id_num == e[i].id){
                        target = i;
                    }
                }
                if(target == -1){
                    printf("\n--> Record not found!\n\n");
                }else{
                    printf("Salary details: \n");
                    printf("Id number->%d\n",e[target].id);
                    printf("Name->%s\n",e[target].name);
                    printf("Basic salary->%f\n",e[target].basic_salary);
                    printf("Bonus->%f\n",e[target].bonus);
                    printf("SDalary deduction->%f\n",e[target].deduction);
                    printf("Net salary->%f\n",e[target].net_salary);
                    printf("Date->%s\n",e[target].date);
                    printf("Status->%s\n",e[target].status);
                    printf("\n--> Record viewed successfully!\n\n");
                }
        }

        else if(option == 3){
            int i,target=-1,id_num;
            printf("Enter the employee's Id No.: ");
            scanf("%d",&id_num);
                for(i=0;i<total_size;i++){
                    if(id_num == e[i].id){
                        target = i;
                    }
                }
                if(target == -1){
                    printf("\n--> Record not found!\n\n");
                }else{
                     printf("Employee id: ");
                    scanf("%d",&e[target].id);
                    printf("Employee name: ");
                    scanf("%s",e[target].name);
                    printf("Employee basic salary: ");
                    scanf("%f",&e[target].basic_salary);
                    printf("Employee bonus: ");
                    scanf("%f",&e[target].bonus);
                    printf("Employee salary deduction: ");
                    scanf("%f",&e[target].deduction);
                    printf("Employee net salary: ");
                    scanf("%f",&e[target].net_salary);
                    printf("Status date: ");
                    scanf("%s",e[target].date);
                    printf("Salary status: ");
                    scanf("%s",e[target].status);
                    printf("\n--> Record updated successfully!\n\n");
                    }
        }

        else if(option == 4){
            int i,target=-1,id_num;
            printf("Enter the employee's Id number to delete the record: ");
            scanf("%d",&id_num);
                for(i=0;i<total_size;i++){
                    if(id_num == e[i].id){
                        target = i;
                    }
                }
                if(target == -1){
                    printf("\n-->Record not found!\n");
                }else{
                    for(int i=target;i<total_size-1;i++){
                        e[i] = e[i+1]; 
                    }
                    printf("\n--> Record deleted successfully!\n\n");
                    total_size--;
                }
        }
        
        else if(option == 5){
            printf("Thank you!");
        }

    }
 return 0;
}