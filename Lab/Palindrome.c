#include<stdio.h>
 int main() {
    int num,org;
    int digi, rev ;
    printf("Enter the number : \n");
    scanf("%d",&org);
    num = org ;
    rev = 0 ;
    while(num != 0) {
        digi = num%10 ;
        rev = rev*10 + digi ;
        num = num / 10 ;
    }
    if (org == rev) {
        printf("The given number is palindrome number :)") ;
    } else {
        printf("The given number is not palindrome number ")  ;
    }
    return 0;
}