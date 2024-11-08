#include<stdio.h>
void main()
{
    float a;
    int b;
    printf("enter the value of a:");
    scanf("%f",&a);
    printf("float=%.2f\n",a);
    b=(int)a;
    printf("integer= %d",b);
}
