#include<stdio.h>
#include<string.h>

  struct student
  {
    int roll;
    char name[10];
    float marks;
    int age;
  };
 int main(){
    int n,option,total_size;
    option = 0;
    total_size = 2;
    
    struct student s[100];

    s[0].roll = 1;
    strcpy(s[0].name, "Rajan");
    s[0].marks = 89.6;
    s[0].age = 20;

    s[1].roll = 2;
    strcpy(s[1].name, "Arpit");
    s[1].marks = 90;
    s[1].age = 21;

    while(option != 5){
        printf("Choose an option: \n");
        printf("1.Add student\n");
        printf("2.View student record\n");
        printf("3.Update student record\n");
        printf("4.Delete student record\n");
        printf("5.Exit\n\n");
        printf("Enter option: ");
        scanf("%d",&option);

        if(option == 1){
            printf("Enter no.of student to be record: ");
            scanf("%d",&n);
            printf("Enter students record: \n");
            for(int i=total_size; i<total_size+n; i++){
                printf("Student roll number: ");
                scanf("%d",&s[i].roll);
                printf("Student name: ");
                scanf("%s",s[i].name);
                printf("Student mark: ");
                scanf("%f",&s[i].marks);
                printf("Student age: ");
                scanf("%d",&s[i].age);
            }
            printf("\n--> Record added successfully!\n\n");
            total_size += n;
        }

        else if(option == 2){
            int i,target=-1,roll_num;
            printf("Enter the student's Roll No.: ");
            scanf("%d",&roll_num);
                for(i=0;i<total_size;i++){
                    if(roll_num == s[i].roll){
                        target = i;
                    }
                }
                if(target == -1){
                    printf("\n--> Record not found!\n\n");
                }else{
                    printf("Student record: \n");
                    printf("Roll number->%d\n",s[target].roll);
                    printf("Name->%s\n",s[target].name);
                    printf("Mark->%f\n",s[target].marks);
                    printf("Age->%d\n",s[target].age);
                    printf("\n--> Record viewed successfully!\n\n");
                }
        }

        else if(option == 3){
            int i,target=-1,roll_num;
            printf("Enter the student's Roll No.: ");
            scanf("%d",&roll_num);
                for(i=0;i<total_size;i++){
                    if(roll_num == s[i].roll){
                        target = i;
                    }
                }
                if(target == -1){
                    printf("\n--> Record not found!\n\n");
                }else{
                    printf("Update student record: \n");
                    printf("Student roll number: ");
                    scanf("%d",&s[target].roll);
                    printf("Student name: ");
                    scanf("%s",s[target].name);
                    printf("Student mark: ");
                    scanf("%f",&s[target].marks);
                    printf("Student age: ");
                    scanf("%d",&s[target].age);
                    printf("\n--> Record updated successfully!\n\n");
                    }
        }

        else if(option == 4){
            int i,target=-1,roll_num;
            printf("Enter the student's Roll Number to delete the record: ");
            scanf("%d",&roll_num);
                for(i=0;i<total_size;i++){
                    if(roll_num == s[i].roll){
                        target = i;
                    }
                }
                if(target == -1){
                    printf("\n-->Record not found!\n");
                }else{
                    for(int i=target;i<total_size-1;i++){
                        s[i] = s[i+1]; 
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