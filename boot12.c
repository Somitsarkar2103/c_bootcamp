#include<stdio.h>
int main(){
    int n,original,reverse=0,remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    original=n;
    while(n!=0) {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }
    printf("Reverse = %d\n", reverse);
    if (original== reverse)printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
