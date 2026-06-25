#include<stdio.h>
#include<string.h>
 int main(){
    char a[40],b[40];
    puts("Enter 1st string: ");
    gets(a);
    puts("Enter 2nd string: ");
    gets(b);

    puts("Common element: \n");
    int duplicate;
    for(int i=0; a[i]!='\0'; i++){
        for(int j=0; b[j]!='\0'; j++){
            if(a[i]==a[j] && i != j){
                duplicate = j;
            }
            if(a[i] == b[j] && duplicate != j){
            printf("%c, ",a[i]);
            }

            duplicate = -1; 
        }
    }

 return 0;
}