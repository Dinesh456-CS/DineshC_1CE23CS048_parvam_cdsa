#include <stdio.h>

int main() {
    int ch;
    printf("Enter your choose:");
    scanf("%d",&ch);
    switch(ch) {
        case 1: printf("Monday");
          break;
        case 2: printf("Tuesday");
          break;
        case 3: printf("Wednesday");
          break;
        case 4: printf("thursday");
          break;
        case 5: printf("friday");
          break;
        case 6: printf("Saturday");
          break;
        case 7: printf("Sunday");
          break;
        default: printf("no entry");
          break;
    }
    
    return 0;
}