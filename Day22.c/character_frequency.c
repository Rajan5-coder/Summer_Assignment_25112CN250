#include<stdio.h>
 int main(){
    char str[50];
    puts("Enter string: ");
    gets(str);

    int i = 0;
    while(str[i] != '\0'){
         int alreadyexist = 0;
         int j = 0;
        while(j<i){           
             if(str[i]==str[j]){
                alreadyexist = 1;
                break;
             }
             j++;
        }
        
        if(alreadyexist == 0){
            int count = 0;
            int k = i;
           while(str[k] != '\0'){
            if(str[i]==str[k]){
               count++;
            }
            k++; 
          }           
        printf("%c = %d times\n",str[i],count);
        }
     i++;
    }

 return 0;
}