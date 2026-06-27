#include<stdio.h>
 int main(){
    int ready_or_not,option,score = 0;

    printf("Instructions: \n1.In this quiz there are 5 questions.");
    printf("\n2.Compulsary to attempt all questions.");
    printf("\n3.Each question has 4 options.");
    printf("\n4.Select one option for each question.");
    printf("\n5.There is no negative marking for incorrect answers.\n");

    printf("\nAre you ready: \n1.Yes\n2.No\n");
    printf("Enter 1 for Yes or 0 for No: \n");
    scanf("%d",&ready_or_not);

    if(ready_or_not == 1){
        printf("Q1.Which language is mainly used for system programming?\n");
        printf("1. HTML\n");
        printf("2. CSS\n");
        printf("3. c\n");
        printf("4. SQL\n");
        printf("Choose an option: ");
        scanf("%d",&option);
        if(option == 3){
            printf("Correct Answer!\n\n");
            score++;
        }else printf("Wrong Answer!\n\n");

        printf("Q2. Who is known as the Father of Computers?\n");
        printf("1. Charles Babbage\n");
        printf("2. Albert Einstein\n");
        printf("3. Isaac Newton\n");
        printf("4. Thomas Edison\n");
        printf("Choose an option: ");
        scanf("%d",&option);
        if(option == 1){
            printf("Correct Answer!\n\n");
            score++;
        }else printf("Wrong Answer!\n\n");

        printf("Q3.Which data type is used to store decimal numbers in C?\n");
        printf("1. int\n");
        printf("2. char\n");
        printf("3. float\n");
        printf("4. void\n");
        printf("Choose an option: ");
        scanf("%d",&option);
        if(option == 3){
            printf("Correct Answer!\n\n");
            score++;
        }else printf("Wrong Answer!\n\n");

        printf("Q4.Which keyword is used to stop a loop or switch statement in C?\n");
        printf("1. continue\n");
        printf("2. break\n");
        printf("3. return\n");
        printf("4. goto\n");
        printf("Choose an option: ");
        scanf("%d",&option);
        if(option == 2){
            printf("Correct Answer!\n\n");
            score++;
        }else printf("Wrong Answer!\n\n");

        printf("Q5. Which of the following loops is guaranteed to execute at least once?\n");
        printf("1. for\n");
        printf("2. while\n");
        printf("3. do-while\n");
        printf("4. None of these\n");
        printf("Choose an option: ");
        scanf("%d",&option);
        if(option == 3){
            printf("Correct Answer!\n\n");
            score++;
        }else printf("Wrong Answer!\n\n");

        printf("Quiz Completed!\n");

        if(score == 5){
            printf("Your Score = %d\n",score);
            printf("Congratulations!\nYour score is 100%%");
        }else printf("Your Score = %d",score);
    }
    
 return 0;
}