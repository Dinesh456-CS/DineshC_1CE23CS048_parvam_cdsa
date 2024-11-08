#include <stdio.h>

int main() {
    int i,n;
    printf("enter the num value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        if(n%i==0) {
        printf("\nfactor number are %d",i);
        }
        else {
        printf("\nnot facto are %d",i);
        }
    }
    return 0;
}
