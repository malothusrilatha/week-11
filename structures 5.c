#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct student s1, s2;
    printf("Enter student details\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll No: ");
    scanf("%d", &s1.roll);
    printf("Marks: ");
    scanf("%f", &s1.marks);
    s2 = s1;
    printf("\n--- Copied Student Details ---\n");
    printf("Name   : %s\n", s2.name);
    printf("Roll   : %d\n", s2.roll);
    printf("Marks  : %.2f\n", s2.marks);
    return 0;
}






