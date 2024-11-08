#include <stdio.h>
void main() 
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if((n<=1) && (n>=1000)) {
        if(n%2==0) {
          printf("even");
        }
        else {
            printf("not even");
        }
        printf("valid");
    }
    else {
     printf("invalid");
    }
}
