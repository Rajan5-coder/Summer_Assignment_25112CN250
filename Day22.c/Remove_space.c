#include<stdio.h>
 int main(){
    char str[20];
    puts("Enter string: ");
    gets(str);

    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == ' '){
            int k=i;
            while(str[k] != '\0'){
                str[k] = str[k+1];
                k++;
            }
        }
        i++;
    }
    puts(str);


 return 0;
}