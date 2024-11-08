#include<stdio.h>
int main()
{
   int dec,bin[32],i=0;
   printf("enter the decimal number");
   scanf("%d",&dec);
   if(dec==0) {
       printf("binary is :\n");
       return 0;
   }
   while(dec>0) {
       bin[i]=dec%2;
       dec/=2;
       i++;
   }
   printf("binary number:");
   for(i=i-1;i>=0;i--) {
       printf("%d",bin[i]);
   }
    printf("\n");
    return 0;
}
