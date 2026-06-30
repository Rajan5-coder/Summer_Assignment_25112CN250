#include<stdio.h>
#include<string.h>

  float total(float a, float b, float c, float d, float e){
        float sum = a + b + c + d + e;
        return sum;
  }

  float percentage(float a, float b, float c, float d, float e){
        float per = ((a + b + c + d + e) / 350) * 100;
        return per;
  }

  char grade(float n){
    if(n>=90 && n<=100) return 'A';
    else if(n>=70 && n<90) return 'B';
    else if(n>=50 && n<70) return 'C';
    else if(n<50) return 'D';
  }

  void result(float n){
    if(n>=33) printf("Pass");
    else printf("Fail");
  }


  struct salary_management
  {
    int roll;
    char name[10];
    char course[20];
    char semester[10];

    float pps_mark;
    float evs_mark;
    float math_mark;
    float electronics_mark;
    float physics_mark;

    float total ;
    float percentage;
    char grade[20];
    char result[10];
  };
 int main(){
    int n,option,total_size;
    option = 0;
    total_size = 2;
    
    struct salary_management e[100];

    e[0].roll = 1210;
    strcpy(e[0].name, "Shivam");
    strcpy(e[0].course, "Btech CSE-AI");
    strcpy(e[0].semester, "2nd");
    e[0].pps_mark = 65;
    e[0].evs_mark = 60;
    e[0].math_mark = 68;
    e[0].electronics_mark = 55;
    e[0].physics_mark = 58;
    e[0].total = 299;
    e[0].percentage = 81.42;
    strcpy(e[0].grade, "A");
    strcpy(e[0].result, "Pass");

    e[1].roll = 1211;
    strcpy(e[1].name, "Shivam");
    strcpy(e[1].course, "B.tech CSE-AI");
    strcpy(e[1].semester, "2nd");
    e[1].pps_mark = 55;
    e[1].evs_mark = 58;
    e[1].math_mark = 65;
    e[1].electronics_mark = 60;
    e[1].physics_mark = 61;
    e[1].total = 302;
    e[1].percentage = 85.42;
    strcpy(e[1].grade, "A");
    strcpy(e[1].result, "Pass");

    while(option != 6){
        printf("\nChoose an option: \n");
        printf("1.Add student's marksheet\n");
        printf("2.View student's marksheet\n");
        printf("3.Highest Mark\n");
        printf("4.Update student's marksheet\n");
        printf("5.Delete student's marksheet\n");
        printf("6.Exit\n\n");
        printf("Enter option: ");
        scanf("%d",&option);

        if(option == 1){
            printf("Enter no.of student to be add: ");
            scanf("%d",&n);
            printf("Enter marksheet details: \n");
            for(int i=total_size; i<total_size+n; i++){
                printf("Student roll number: ");
                scanf("%d",&e[i].roll);
                printf("Student name: ");
                scanf("%s",e[i].name);
                printf("Student Course: ");
                scanf("%s",e[i].course);
                printf("Semester: ");
                scanf("%s",e[i].semester);

                printf("PPS mark: ");
                scanf("%f",&e[i].pps_mark);
                printf("EVS mark: ");
                scanf("%f",&e[i].evs_mark);
                printf("Maths mark: ");
                scanf("%f",&e[i].math_mark);
                printf("Electronics mark: ");
                scanf("%f",&e[i].electronics_mark);
                printf("Physics mark: ");
                scanf("%f",&e[i].physics_mark);

                e[i].total = total(e[i].pps_mark, e[i].evs_mark, e[i].math_mark, e[i].electronics_mark, e[i].physics_mark);
                printf("Total mark: %f\n",e[i].total);
                e[i].percentage = percentage(e[i].pps_mark, e[i].evs_mark, e[i].math_mark, e[i].electronics_mark, e[i].physics_mark);
                printf("Percentage: %f\n",e[i].percentage);
                printf("Status grade: %c\n",grade(e[i].percentage));
                printf("Student result: ");
                result(e[i].percentage);
            }
            printf("\n\n--> Marksheet added successfully!\n\n");
            total_size += n;
        }

        else if(option == 2){
            int i,target=-1,roll_num;
            printf("Enter student's roll number: ");
            scanf("%d",&roll_num);
                for(i=0;i<total_size;i++){
                    if(roll_num == e[i].roll){
                        target = i;
                    }
                }
                if(target == -1){
                    printf("\n--> Marksheet not found!\n\n");
                }else{
                    printf("Marksheet details: \n\n");
                    printf("Roll number->%d\n",e[target].roll);
                    printf("Name-> %s\n",e[target].name);
                    printf("Course-> %s\n",e[target].course);
                    printf("Semester-> %s\n\n",e[target].semester);

                    printf("PPS mark-> %f\n",e[target].pps_mark);
                    printf("EVS mark-> %f\n",e[target].evs_mark);
                    printf("Maths mark-> %f\n",e[target].math_mark);
                    printf("Electronics mark-> %f\n",e[target].electronics_mark);
                    printf("Physics mark-> %f\n\n",e[target].physics_mark);

                    e[target].total = total(e[target].pps_mark, e[target].evs_mark, e[target].math_mark, e[target].electronics_mark, e[target].physics_mark);
                    printf("Total mark-> %f\n",e[target].total);
                    e[target].percentage = percentage(e[target].pps_mark, e[target].evs_mark, e[target].math_mark, e[target].electronics_mark, e[target].physics_mark);
                    printf("Percentage-> %f\n",e[target].percentage);
                    printf("Grade-> %c\n",grade(e[target].percentage));
                    printf("Result-> ");
                    result(e[target].percentage);
                    printf("\n\n--> Marksheet viewed successfully!\n\n");
                }
        }

        else if(option == 3){
            float Roll,max=0;
            int target;
                for(int i=0;i<total_size;i++){
                    if(max < e[i].percentage){
                        max = e[i].percentage;
                        target = i;
                    }
                }
                printf("\n\n--> Highest mark obtain student's details: \n\n");
                printf("Roll number->%d\n",e[target].roll);
                printf("Name-> %s\n",e[target].name);
                printf("Course-> %s\n",e[target].course);
                printf("Semester-> %s\n\n",e[target].semester);

                printf("PPS mark-> %f\n",e[target].pps_mark);
                printf("EVS mark-> %f\n",e[target].evs_mark);
                printf("Maths mark-> %f\n",e[target].math_mark);
                printf("Electronics mark-> %f\n",e[target].electronics_mark);
                printf("Physics mark-> %f\n\n",e[target].physics_mark);

                e[target].total = total(e[target].pps_mark, e[target].evs_mark, e[target].math_mark, e[target].electronics_mark, e[target].physics_mark);
                printf("Total mark-> %f\n",e[target].total);
                e[target].percentage = percentage(e[target].pps_mark, e[target].evs_mark, e[target].math_mark, e[target].electronics_mark, e[target].physics_mark);
                printf("Percentage-> %f\n",e[target].percentage);
                printf("Grade-> %c\n",grade(e[target].percentage));
                printf("Result-> ");
                result(e[target].percentage);
                printf("\n");
                    
            }

        else if(option == 4){
            int i,target=-1,roll_num;
            printf("Enter student's roll no.: ");
            scanf("%d",&roll_num);
                for(i=0;i<total_size;i++){
                    if(roll_num == e[i].roll){
                        target = i;
                    }
                }
                if(target == -1){
                    printf("\n--> Marksheet not found!\n\n");
                }else{
                    printf("\nStudent roll number: ");
                    scanf("%d",&e[target].roll);
                    printf("Student name: ");
                    scanf("%s",e[target].name);
                    printf("Student Course: ");
                    scanf("%s",e[target].course);
                    printf("Semester: ");
                    scanf("%s",e[target].semester);

                    printf("PPS mark: ");
                    scanf("%f",&e[target].pps_mark);
                    printf("EVS mark: ");
                    scanf("%f",&e[target].evs_mark);
                    printf("Maths mark: ");
                    scanf("%f",&e[target].math_mark);
                    printf("Electronics mark: ");
                    scanf("%f",&e[target].electronics_mark);
                    printf("Physics mark: ");
                    scanf("%f",&e[target].physics_mark);

                    e[target].total = total(e[target].pps_mark, e[target].evs_mark, e[target].math_mark, e[target].electronics_mark, e[target].physics_mark);
                    printf("Total mark: %f\n",e[target].total);
                    e[target].percentage = percentage(e[target].pps_mark, e[target].evs_mark, e[target].math_mark, e[target].electronics_mark, e[target].physics_mark);                    
                    printf("Percentage: %f\n",e[target].percentage);                    
                    printf("Status grade: %c\n",grade(e[target].percentage));
                    printf("Student result: ");
                    result(e[target].percentage);
                    printf("\n\n--> Marksheet updated successfully!\n\n");
                    }
        }

        else if(option == 5){
            int i,target=-1,roll_num;
            printf("Enter the student's roll number to delete marksheet: ");
            scanf("%d",&roll_num);
                for(i=0;i<total_size;i++){
                    if(roll_num == e[i].roll){
                        target = i;
                    }
                }
                if(target == -1){
                    printf("\n-->Marksheet not found!\n");
                }else{
                    for(int i=target;i<total_size-1;i++){
                        e[i] = e[i+1]; 
                    }
                    printf("\n--> Marksheet deleted successfully!\n\n");
                    total_size--;
                }
        }
        
        else if(option == 6){
            printf("Thank you!");
        }

    }
 return 0;
}