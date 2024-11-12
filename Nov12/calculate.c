#include<stdio.h>
int main() {
    char ch;
    char a,s,m,d;
    float num1,num2,result;
    printf("enter the value of num1 and num2:");
    scanf("%f %f",&num1,&num2);
    printf(" Menu: \na-add\ns-substraction\nm-multiplication\nd-Division:\n");
    scanf(" %c",&ch);
    switch(ch) {
        case 'a':
         result=num1+num2;
         break;
        case 's' :
         result=num1-num2;
         break;
        case'm' :
         result=num1*num2;
         break;
        case'd' :
         result=num1/num2;
         break;
        default :
          printf("Invalid option");
          
    }
    printf("result=%f",result);
    return 0;
}