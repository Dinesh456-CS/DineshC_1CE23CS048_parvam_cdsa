#include <stdio.h>
int main() {
    int n,val,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0){
        val=n%10;
        sum+=val;
        n=n/10;
    }
    printf("The sum=%d",sum);
    return 0;
}