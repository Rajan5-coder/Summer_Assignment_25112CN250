#include<stdio.h>
#include<math.h>

void input(int *num1, int *num2){
   printf("Enter two numbers: ");
   scanf("%d%d",num1,num2);
}

 int main(){

   int num1,num2;
   int option = 0;;

   printf("\n>>>> CALCULATAR <<<<\n\n");

   while(option != 9){

      printf("1.Addition\n");
      printf("2.Subtraction\n");
      printf("3.Multiplication\n");
      printf("4.Division\n");
      printf("5.Modulus\n");
      printf("6.Power\n");
      printf("7.Square\n");
      printf("8.Square Root\n");
      printf("9.Exit\n\n");

      printf("Enter option: ");
      scanf("%d",&option);
      printf("\n");

      switch(option){
         case 1 : 
            input(&num1,&num2);
            printf("Result = %d\n\n",num1 + num2);
            break;
         case 2 : 
            input(&num1,&num2);
            printf("Result = %d\n\n",num1 - num2);
            break;
         case 3 : 
            input(&num1,&num2);
            printf("Result = %d\n\n",num1 * num2);
            break;
         case 4 : 
            input(&num1,&num2);
            if(num2 == 0) printf("\n--> Denominator can't be zero.\n--> Enter non-zero number. \n\n");
            else{
               float div;
               div = (float)num1 / num2;
               printf("Result = %f\n\n",div);
               break;
            }
         case 5 : 
            input(&num1,&num2);
            if(num2 == 0) printf("\n--> Enter non-zero number. \n\n");
            else{
               printf("Result = %d\n\n",num1 % num2);
               break;
            }
         case 6 : 
            input(&num1,&num2);
            printf("Result = %lf\n\n",pow(num1,num2));
            break;
         case 7 : 
            printf("Enter a number: ");
            scanf("%d",&num1);
            printf("Result = %d\n\n",(num1 * num1));
            break;
         case 8 :
            printf("Enter a number: ");
            scanf("%d",&num1); 
            printf("\nResult = %f\n\n",sqrt(num1));
            break;
         case 9 : 
            printf("Thank You !!\n\n");
            break;
         default :
            printf("--> Wrong option!\n--> Please try again\n\n");
      }     
   }

 return 0;
}