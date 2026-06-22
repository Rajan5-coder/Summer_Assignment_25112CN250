#include<stdio.h>
 int main(){
    char str[100];
    puts("Enter string: ");
    gets(str);

    int i = 0, count = 0;
    while(str[i] != '\0'){
        if(str[i] != ' ' && str[i] != ',' && str[i] != '.')
        count++;

        i++;
    }

    printf("Total words = %d",count);
 return 0;
}