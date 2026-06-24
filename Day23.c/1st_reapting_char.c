#include<stdio.h>
 int main(){
    char str[50];
    puts("Enter string: ");
    gets(str);

    int i = 0;
    while(str[i] != '\0'){
        int count = 0;
        int j = 0;
        while(str[j] != '\0'){
            if(str[i] == str[j]){
               count++;
            }
            j++;
        }
        if(count == 2){
           printf("1st reapting char = %c",str[i]);
           break;
        }
     i++;   
    }

 return 0;
}