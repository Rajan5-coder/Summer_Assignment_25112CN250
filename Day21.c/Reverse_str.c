#include<stdio.h>
#include<string.h>
 int main(){
    char str[20];
    puts("Enter string: ");
    gets(str);
    int i,j;
    i = 0;
    j = (strlen(str) - 1);
    while(i<=j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    puts(str);
 return 0;
}