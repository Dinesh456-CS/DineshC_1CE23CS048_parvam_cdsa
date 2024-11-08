#include <stdio.h>
int main() {
    char usn[20], name[50];
    int marks[3],total=0;
    float average;

    printf("Enter USN: ");
    scanf("%s", usn);
    printf("Enter Name: ");
    scanf("%s", name);

    for (int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    average = total / 3;

    printf("\nStudent Details:\n");
    printf("USN: %s\n", usn);
    printf("Name: %s\n", name);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}



2 type conversion
 a     
#include<stdio.h>
void main()
{
    int chara;
    printf("enter the chatracter =");
    scanf("%c",&chara);
    printf("asci=%d",chara);
}
