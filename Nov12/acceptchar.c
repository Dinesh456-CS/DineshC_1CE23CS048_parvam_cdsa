#include<stdio.h>
void main() {
    char var;
    printf("enter a variable:");
    scanf("%c",&var);
    if(var>=97 && var<=122)
      printf("lower case");
    else if(var>=65 && var<=90)
      printf("upper case");
    else if(var>=48 && var<=57)
      printf("it is a digit number");
    else
     printf("special");
}