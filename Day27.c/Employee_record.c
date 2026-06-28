#include<stdio.h>
#include<string.h>

  struct employee
  {
    int id;
    char name[10];
    int age;
    char desination[20];
    int salary;
  };
 int main(){
    int n,option,total_size;
    option = 0;
    total_size = 2;
    
    struct employee e[100];

    e[0].id = 101;
    strcpy(e[0].name, "Shivam");
    e[0].age = 20;
    strcpy(e[0].desination, "Shoftware Engineer");
    e[0].salary = 100000;

    e[1].id = 102;
    strcpy(e[1].name, "Arjun");
    e[1].age = 25;
    strcpy(e[1].desination, "Manager");
    e[1].salary = 150000;

    while(option != 5){
        printf("Choose an option: \n");
        printf("1.Add employee\n");
        printf("2.View employee record\n");
        printf("3.Update employee record\n");
        printf("4.Delete employee record\n");
        printf("5.Exit\n\n");
        printf("Enter option: ");
        scanf("%d",&option);

        if(option == 1){
            printf("Enter no.of employee to be record: ");
            scanf("%d",&n);
            printf("Enter employee record: \n");
            for(int i=total_size; i<total_size+n; i++){
                printf("Employee id: ");
                scanf("%d",&e[i].id);
                printf("Employee name: ");
                scanf("%s",e[i].name);
                printf("Employee age: ");
                scanf("%d",&e[i].age);
                printf("Employee desination: ");
                scanf("%s",e[i].desination);
                printf("Employee salary: ");
                scanf("%d",&e[i].salary);
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
                    printf("Employee record: \n");
                    printf("Id number->%d\n",e[target].id);
                    printf("Name->%s\n",e[target].name);
                    printf("Age->%d\n",e[target].age);
                    printf("Desination->%s\n",e[target].desination);
                    printf("Salary->%d\n",e[target].salary);
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
                    printf("Employee age: ");
                    scanf("%d",&e[target].age);
                    printf("Employee desination: ");
                    scanf("%s",e[target].desination);
                    printf("Employee salary: ");
                    scanf("%d",&e[target].salary);
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