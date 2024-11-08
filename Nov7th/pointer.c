#include<stdio.h>
int main()
{
    int x,y,*point;
    x=22;
    printf("x=%d\n",x);
    point=&x;
    printf("pointer=%d\n",point);
    y=*point;
    printf("y=%d\n",y);
}