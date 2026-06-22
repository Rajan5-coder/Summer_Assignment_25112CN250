#include<stdio.h>
#include<string.h>
 int main(){
    char str[20];
    puts("Enter string: ");
    gets(str);
    int i,vow,conso;
    i = 0;
    vow = 0;
    conso = 0;
    while(str[i] != '\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
       str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){

        vow++;
    }
    else {
        conso++;
    }
    i++;
}

    printf("Vowel = %d\nConsonant = %d",vow,conso);


      
    

 return 0;
}