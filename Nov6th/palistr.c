#include <stdio.h>
#include<string.h>

int ispalindrome(char str[]) {
    int left=0;
    int right=strlen(str)-1;
    while(left<right) {
        if(str[left]!=str[right]) {
            return 0;
        }
        left++;
        right--;
    }return 1;
}
int main() {
    char str[100];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    if(ispalindrome(str)) {
        printf("the string is a palindrom.\n");
    }
    else{
        printf("the string is not a palindrom.\n");
    }
    return 0;
}