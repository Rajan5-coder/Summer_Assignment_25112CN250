#include<stdio.h>
#include<string.h>
 int main(){
    char str[70];
    puts("Ener string: ");
    gets(str);

    int i=0;
    int count = 0;
    int till_str_len;
    int longest_size=0;
    for(i=0;str[i] !='\0';i++){
    
       if(str[i] != ' ' && str[i] != ',' && str[i] != '.' ){
            count++;
            if(longest_size < count){
            longest_size = count;
            till_str_len = i;
             
           }
        }else count = 0;

    }

    for(int j=(till_str_len + 1 -longest_size); j<=till_str_len;j++){
        printf("%c",str[j]);
    }
 return 0;
}