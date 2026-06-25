#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count;

    printf("Enter string: \n");
    gets(str);

    printf("Compressed string: \n");
    for(i=0;str[i]!='\0';i=i+count) {
        count = 1;
        while(str[i] == str[i + count]) {
            count++;
        }

        printf("%c", str[i]);

        if(count > 1) {
            printf("%d", count);
        }
    }

    return 0;
}