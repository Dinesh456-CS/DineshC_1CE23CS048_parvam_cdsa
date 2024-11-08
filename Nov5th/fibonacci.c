#include <stdio.h>

int main() {
    int i,n,num1=0,num2=1,fib;
    printf("enter the num value:");
    scanf("%d",&n);
    printf("%d %d",num1,num2);
    for(i=0;i<=n;i++) {
         fib=num1+num2;
         printf(" %d",fib);
         num1=num2;
         num2=fib;
    }
    return 0;
}
