#include <stdio.h>

int main() {
    int x,*pointer1,*pointer2;
    x=5;
    printf("x=%d, *pointer1=%d, &ponter=%d, *pointer2=%d, &pointer2=%d\n",x,*pointer1,&pointer1,*pointer2,&pointer2);
    pointer1=&x;
    printf("x=%d, *pointer1=%d, &ponter=%d, *pointer2=%d, &pointer2=%d\n",x,*pointer1,&pointer1,*pointer2,&pointer2);
    pointer2=pointer1;
    printf("x=%d, *pointer1=%d, &ponter=%d, *pointer2=%d, &pointer2=%d\n",x,*pointer1,&pointer1,*pointer2,&pointer2);
    return 0;
}