#include<stdio.h>
#include<string.h>
 int main(){
    char str[20];
    puts("Enter string: ");
    gets(str);

    int i=0;
    while(str[i] != '\0'){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
    puts(str);
 return 0;
}