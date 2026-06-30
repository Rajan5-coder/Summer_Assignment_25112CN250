#include<stdio.h>
#include<string.h>
 int main(){
    char str[100];
    int total_size = 0, option = 0;

    printf("\n>>>> String Operation System <<<<\n\n");
    
    while(option != 9){
        printf("Choose an option: \n");

        printf("1.Input String\n");
        printf("2.Display String\n");
        printf("3.Find String length\n");
        printf("4.Copy String\n");
        printf("5.Reverse String\n");
        printf("6.Convert to Uppercase\n");
        printf("7.Convert to lowercase\n");
        printf("8.Count Vowel and Consonants\n");
        printf("9.Exit\n\n");

        printf("Enter an option: ");
        scanf("%d",&option);

        if(option == 1){
            printf("Enter size of string: ");
            scanf("%d",&total_size);
            printf("Enter characters: \n");
            scanf("%s",str);
            printf("\n--> Element Inserd Successfully!\n\n");
        }

        else if(option == 2){
            printf("String : \n");
            puts(str);
            printf("\n\n--> String Displayed Successfully!\n\n");
        }
        
        else if(option == 3){
            int size = 0;
            for(int i=0; str[i]!='\0'; i++){
                size++;            
            } 
        printf("Size of string = %d",size);       
            
            printf("\n\n--> Length finded Successfully!\n\n");
        }

        else if(option == 4){
            char str1[100];
            strcpy(str1,str);
            puts(str);
            printf("\n\n--> Sring Copied Successfully!\n\n");
        }

        else if(option == 5){

            int i = 0, j = strlen(str)-1;
            while(i <= j){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i++;
                j--;

            }
            puts(str);
        
            printf("\n--> String Reversed Successfully!\n\n");
        }

        else if(option == 6){
            int i=0;
            while(str[i] != '\0'){
                if(str[i]>='a' && str[i]<='z'){
                    str[i] = str[i] - ('a' - 'A');
                }
                i++;
            }
            puts(str);       
            printf("\n\n--> Uppercase changed Successfully!\n\n");
        }

        else if(option == 7){
            int i=0;
            while(str[i] != '\0'){
                if(str[i]>='A' && str[i]<='Z'){
                    str[i] = str[i] + ('a' - 'A');
                }
                i++;
            }
            puts(str);       
            printf("\n\n--> Lowercase changed Successfully!\n\n");
        }

        else if(option == 8){
            int i,vow,conso;
            i = 0;
            vow = 0;
            conso = 0;
            while(str[i] != '\0'){
                if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
                   str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){

                    vow++;
                }
                else conso++;

                i++;
            }
            printf("Vowel = %d\n",vow);
            printf("Consonants = %d\n",conso);
        
            printf("\n\n--> Vowel and Consonants counted Successfully!\n\n");
        }

        else if(option == 9){
            printf("\nThank yoy !!\n\n");
        }
        
    }
 return 0;
}