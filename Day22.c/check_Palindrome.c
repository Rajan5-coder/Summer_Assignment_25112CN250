#include<stdio.h>
#include<string.h>
 int main(){
    char str1[20],str2[20];
    puts("Enter string: ");
    gets(str1);

    strcpy(str2,str1);

    int i,j;
    i = 0;
    j = (strlen(str1) - 1);
    while(i<=j){
        char temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
        i++;
        j--;
    }
    
    if(strcmp(str1,str2) == 0) printf("Palindrome String");
    else printf("NOt a Palindrome String");
    
 return 0;
}