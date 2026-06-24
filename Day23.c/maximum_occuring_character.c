#include<stdio.h>
#include<string.h>
 int main(){
    char str[20];
    puts("Enter string: ");
    gets(str);

    int i=0;
    int max_occurence = 0;
    char max_occurence_elem;
    for(i=0; i != strlen(str);i++){
        int count=1;
        for(int j=i+1;j!=strlen(str);j++){
            if(str[i]==str[j]){
                count++;
            }

            if(max_occurence < count){
                max_occurence = count;
                max_occurence_elem = str[i];
            }

        }
    }
    printf("max. occurence element = %c",max_occurence_elem);
    printf("\nmax. occurence = %d",max_occurence);

 return 0;
}