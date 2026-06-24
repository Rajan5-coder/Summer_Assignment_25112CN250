#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    int i,j;
    char temp;
    for (i = 0; i < strlen(str) - 1; i++) {
        for (j = i + 1; j < strlen(str); j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int Anagram(char str1[], char str2[]) {
    if (strlen(str1) != strlen(str2))
        return 0;

    sortString(str1);
    sortString(str2);

    
    if (strcmp(str1, str2) == 0)
        return 1;
    else
        return 0;
}

int main() {
    char str1[100], str2[100];

    puts("Enter 1st string: ");
    gets(str1);
    puts("Enter 2nd string: ");
    gets(str2);

    if (Anagram(str1, str2))
        puts("Anagram Strings");
    else
        puts("Not Anagrams");

    return 0;
}