#include<stdio.h>
#include<string.h>
 int main(){
    char str[20];
    puts("Enter string: ");
    gets(str);
    int len=0;
    while(str[len] != '\0'){
        len++;
    }
    printf("Length = %d",len);
 return 0;
}