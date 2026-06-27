#include<stdio.h>
#include <stdlib.h>
#include <time.h>
 int main(){
    srand(time(0));
    int i,x,randum_num;
    randum_num = rand() % 100 + 1;

    i = 0;

    do{
    printf("Guess the number: \n");
    scanf("%d",&x);

    if(x<randum_num)
        printf("Lower number Please! \n");
    if(x>randum_num)
        printf("Higher number Please! \n");
    if(x==randum_num)
        printf("You gessed the number \n");
        i++;
    }while(x!=randum_num);
    
 return 0;
}