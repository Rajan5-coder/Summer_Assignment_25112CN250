#include<stdio.h>

void palindrom(int n){
    int n1 = n;
    int rev = 0;
    while(n>0){
        rev = rev*10 + (n % 10);
        n /= 10;
    }

    if(rev==n1) printf("Palindrom Number");
    else printf("Not a Palindrom Number");

}
 int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    palindrom(n);
 return 0;
}