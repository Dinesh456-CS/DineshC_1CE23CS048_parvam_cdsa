#include<stdio.h>
void main() {
    int n1,n2;
    printf("enter the value of n1:");
    scanf("%d",&n1);
    printf("enter   the value of n2:");
    scanf("%d",&n2);
    if(n1<n2){
     for(;n1<n2;n1++){
        printf("%d\n",n1);
     }
    }
    else {
      printf("Condition not satisfied");  
    }
}