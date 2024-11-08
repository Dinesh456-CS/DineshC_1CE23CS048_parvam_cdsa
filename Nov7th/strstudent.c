#include <stdio.h>
struct student1
{
    char usn[20], name[50];
    int marks[3];
    
};

void main() {
    struct student1 student;
    int total;
    float average;
    printf("Enter USN: ");
    scanf("%s",student.usn);
    printf("Enter Name: ");
    scanf("%s",student.name);

    for (int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &student.marks[i]);
        total+=student.marks[i];
    }
    average = total / 3;

    printf("\nStudent Details:\n");
    printf("USN: %s\n",student.usn);
    printf("Name: %s\n",student.name);
    printf("Total Marks: %.2f\n",total);
    printf("Average Marks: %.2f\n",average);
}
