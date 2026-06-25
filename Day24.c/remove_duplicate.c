#include<stdio.h>
#include<string.h>
 int main(){
    char str[70];
    puts("Ener string: ");
    gets(str);

    int i=0;
    for(i=0;str[i]!='\0';i++){
        int j;
        for(j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                int k;
                for(k=j;str[k]!='\0';k++){
                    str[k] = str[k+1];
                }
                k--;
                j--;
            }
        }
    }
    puts("Without duplicate string ");
    puts(str);

 return 0;
}