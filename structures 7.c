#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
void display(struct student s) {
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", s.name);
    printf("Roll  : %d\n", s.roll);
    printf("Marks : %.2f\n", s.marks);
}
int main() {
    struct student s;
    printf("Enter Student Details\n");
    printf("Name: ");
    scanf("%s", s.name);
    printf("Roll No: ");
    scanf("%d", &s.roll);
    printf("Marks: ");
    scanf("%f", &s.marks);
    display(s);
    return 0;
}








